// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOAPPLEMEDIASERVICESRESULT_H
#define GEOAPPLEMEDIASERVICESRESULT_H

@class NSString, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOAppleMediaServicesResult : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (readonly, nonatomic) NSString *classType; // ivar: _classType
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *editorialSubtitle; // ivar: _editorialSubtitle
@property (readonly, nonatomic) int episodeNumber; // ivar: _episodeNumber
@property (copy, nonatomic) NSString *iOSBundleIdentifier; // ivar: _iOSBundleIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (nonatomic) int ratingsCount; // ivar: _ratingsCount
@property (nonatomic) float ratingsValue; // ivar: _ratingsValue
@property (readonly, nonatomic) NSString *shortName; // ivar: _shortName
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSArray *transitModes; // ivar: _transitModes
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)_artworkDictionaryFromResponseDictionary:(id)arg0 ;
-(BOOL)isAppInstalled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 mediaType:(NSInteger)arg1 displayName:(id)arg2 shortName:(id)arg3 artistName:(id)arg4 url:(id)arg5 subtitle:(id)arg6 editorialSubtitle:(id)arg7 iOSBundleIdentifier:(id)arg8 artworkURL:(id)arg9 ratingsCount:(int)arg10 ratingsValue:(float)arg11 transitModes:(id)arg12 classType:(id)arg13 episodeNumber:(int)arg14 duration:(CGFloat)arg15 ;
-(id)initWithResponseDictionary:(id)arg0 mediaType:(NSInteger)arg1 artworkSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif