// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISLIVEPHOTOPLAYBACKFILTER_H
#define ISLIVEPHOTOPLAYBACKFILTER_H

@class NSMutableSet;


#import "ISObservable.h"

@interface ISLivePhotoPlaybackFilter : ISObservable

@property (readonly, nonatomic) NSMutableSet *_playbackDisabledReasons; // ivar: __playbackDisabledReasons
@property (readonly, nonatomic) CGFloat hintProgress; // ivar: _hintProgress
@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges; // ivar: _isPerformingInputChanges
@property (nonatomic) BOOL playIsSticky; // ivar: _playIsSticky
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled; // ivar: _playbackDisabled
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(id)init;
-(id)mutableChangeObject;
-(void)reset;
-(void)setPlaybackDisabled:(BOOL)arg0 forReason:(id)arg1 ;


@end


#endif