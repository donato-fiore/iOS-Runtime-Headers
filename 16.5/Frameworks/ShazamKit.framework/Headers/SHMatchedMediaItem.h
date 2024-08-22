// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMATCHEDMEDIAITEM_H
#define SHMATCHEDMEDIAITEM_H

@class NSDate, NSArray, NSString;
@protocol NSSecureCoding;


#import "SHMediaItem.h"
#import "SHSyncedLyrics.h"

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding>



@property (readonly, nonatomic) NSDate *audioStartDate;
@property (readonly, nonatomic) float frequencySkew;
@property (readonly, nonatomic) CGFloat matchOffset;
@property (readonly, nonatomic) NSInteger matchScore;
@property (readonly, nonatomic) CGFloat predictedCurrentMatchOffset;
@property (readonly, nonatomic) NSArray *queryMatchOffsetRanges;
@property (readonly, nonatomic) NSArray *referenceMatchOffsetRanges;
@property (readonly, nonatomic) float speedSkew;
@property (readonly, nonatomic) SHSyncedLyrics *syncedLyrics; // ivar: _syncedLyrics
@property (readonly, copy, nonatomic) NSString *syncedLyricsSnippet;


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)creationDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchedMediaItemDictionary:(id)arg0 ;
-(id)initWithMatchedMediaItemDictionary:(id)arg0 syncedLyrics:(id)arg1 ;
-(id)initWithProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif