// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSNOWPLAYINGINFO_H
#define TVRMSNOWPLAYINGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRMSNowPlayingInfo : NSObject

@property (retain, nonatomic) NSString *albumName; // ivar: _albumName
@property (retain, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL canSkipNext; // ivar: _canSkipNext
@property (nonatomic) BOOL canSkipPrevious; // ivar: _canSkipPrevious
@property (nonatomic) BOOL canWishlist; // ivar: _canWishlist
@property (nonatomic) NSUInteger databaseID; // ivar: _databaseID
@property (nonatomic) BOOL hasChapterData; // ivar: _hasChapterData
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (nonatomic, getter=isLikeable) BOOL likeable; // ivar: _likeable
@property (nonatomic) NSInteger likedState; // ivar: _likedState
@property (nonatomic) NSInteger mediaKind; // ivar: _mediaKind
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) int revisionNumber; // ivar: _revisionNumber
@property (nonatomic) NSInteger scrubbableState; // ivar: _scrubbableState
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration
@property (retain, nonatomic) NSString *trackName; // ivar: _trackName


-(id)description;
-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif