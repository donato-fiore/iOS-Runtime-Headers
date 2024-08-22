// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCPLAYBACKPOSITIONENTITY_H
#define SBCPLAYBACKPOSITIONENTITY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBCPlaybackPositionDomain.h"

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (nonatomic) CGFloat bookmarkTimestamp; // ivar: _bookmarkTimestamp
@property (readonly, nonatomic) NSInteger foreignDatabaseEntityID; // ivar: _foreignDatabaseEntityID
@property (nonatomic) BOOL hasBeenPlayed; // ivar: _hasBeenPlayed
@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // ivar: _playbackPositionDomain
@property (readonly, nonatomic) NSString *ubiquitousIdentifier; // ivar: _ubiquitousIdentifier
@property (nonatomic) NSUInteger userPlayCount; // ivar: _userPlayCount


+(BOOL)supportsSecureCoding;
+(id)ubiquitousIdentifierWithItemTitle:(id)arg0 albumName:(id)arg1 itemArtistName:(id)arg2 ;
+(id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg0 feedGUID:(id)arg1 ;
+(id)ubiquitousIdentifierWithUniqueStoreID:(NSInteger)arg0 ;
+(id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg0 feedGUID:(id)arg1 ;
-(id)SBKUniversalPlaybackPositionMetadata;
-(id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackPositionDomain:(id)arg0 ubiquitousIdentifier:(id)arg1 foreignDatabaseEntityID:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif