// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMEDIAPLAYERITEM_H
#define SFMEDIAPLAYERITEM_H

@class NSArray, NSMutableArray, NSURL;

#import <Foundation/Foundation.h>


@interface SFMediaPlayerItem : NSObject

@property (copy, nonatomic) id *completedHandler; // ivar: _completedHandler
@property (retain, nonatomic) id *observerToken; // ivar: _observerToken
@property (readonly, copy, nonatomic) NSArray *playbackNotificationTimeRanges; // ivar: _playbackNotificationTimeRanges
@property (retain, nonatomic) NSMutableArray *playerItems; // ivar: _playerItems
@property (nonatomic) BOOL shouldLoop; // ivar: _shouldLoop
@property (copy, nonatomic) id *startedHandler; // ivar: _startedHandler
@property (readonly, copy, nonatomic) id *timeRangeHandler; // ivar: _timeRangeHandler
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(void)invalidate;
-(void)setPlayerItem:(id)arg0 ;


@end


#endif