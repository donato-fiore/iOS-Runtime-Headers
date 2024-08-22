// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISTOUCHLIVEPHOTOPLAYBACKFILTER_H
#define ISTOUCHLIVEPHOTOPLAYBACKFILTER_H

@class NSDate;


#import "ISLivePhotoPlaybackFilter.h"
#import "ISDisplayLink.h"

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter

@property (nonatomic, setter=_setDisplayLink:) ISDisplayLink *_displayLink; // ivar: __displayLink
@property (nonatomic, setter=_setPlaybackReaquestID:) NSInteger _playbackRequestID; // ivar: __playbackRequestID
@property (retain, nonatomic, setter=_setPlaybackStartDate:) NSDate *_playbackStartDate; // ivar: __playbackStartDate
@property (nonatomic, getter=isTouchActive) BOOL touchActive; // ivar: _touchActive


-(NSInteger)_nextPlaybackRequestID;
-(void)_handleDisplayLink;
-(void)didPerformChanges;
-(void)reset;


@end


#endif