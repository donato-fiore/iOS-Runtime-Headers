// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIAITEM_H
#define SHMEDIAITEM_H

@class NSDictionary, NSString, NSURL, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDictionary *_rawResponseSongs; // ivar: __rawResponseSongs
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSString *appleMusicID;
@property (readonly, nonatomic) NSURL *appleMusicURL;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) BOOL explicitContent;
@property (readonly, nonatomic) NSArray *frequencySkewRanges;
@property (readonly, copy, nonatomic) NSString *fuzzyRepresentation; // ivar: _fuzzyRepresentation
@property (readonly, nonatomic) NSArray *genres;
@property (readonly, copy, nonatomic) NSString *isrc;
@property (readonly, copy, nonatomic) NSString *lyricsSnippet;
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSString *shazamID;
@property (readonly, copy, nonatomic) NSArray *staticLyricLines;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSArray *timeRanges;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) NSURL *webURL;


+(BOOL)supportsSecureCoding;
+(id)mediaItemWithDictionary:(id)arg0 ;
+(id)mediaItemWithProperties:(id)arg0 ;
+(id)serverConnection;
+(void)fetchMediaItemWithShazamID:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)describesFrequencySkew:(CGFloat)arg0 ;
-(BOOL)describesOffset:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)validValueForProperty:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif