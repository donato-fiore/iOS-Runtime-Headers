// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAPPSTOREAPP_H
#define GEOAPPSTOREAPP_H

@class NSURL, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOAppStoreApp : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *appStoreURL; // ivar: _appStoreURL
@property (retain, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *iOSBundleIdentifier; // ivar: _iOSBundleIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int ratingsCount; // ivar: _ratingsCount
@property (nonatomic) float ratingsValue; // ivar: _ratingsValue
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSArray *transitModes; // ivar: _transitModes


+(BOOL)supportsSecureCoding;
-(BOOL)isAppInstalled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 appStoreURL:(id)arg2 subtitle:(id)arg3 iOSBundleIdentifier:(id)arg4 artworkURL:(id)arg5 ratingsCount:(int)arg6 ratingsValue:(float)arg7 transitModes:(id)arg8 ;
-(id)initWithResponseDictionary:(id)arg0 artworkSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif