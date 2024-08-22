// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCLOSEDVIEWFINDERCONTROLLER_H
#define CAMCLOSEDVIEWFINDERCONTROLLER_H

@class NSMutableSet;
@protocol CAMClosedViewfinderControllerDelegate;

#import <Foundation/Foundation.h>


@interface CAMClosedViewfinderController : NSObject

@property (readonly, nonatomic) NSMutableSet *_reasonsForClosingViewfinder; // ivar: __reasonsForClosingViewfinder
@property (nonatomic, setter=_setReferenceTime:) CGFloat _referenceTime; // ivar: __referenceTime
@property (nonatomic, setter=_setReferenceTimeEvent:) NSInteger _referenceTimeEvent; // ivar: __referenceTimeEvent
@property (weak, nonatomic) NSObject<CAMClosedViewfinderControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isViewfinderClosed) BOOL viewfinderClosed;


-(BOOL)hasClosedViewfinderReason:(NSInteger)arg0 ;
-(id)_descriptionForReasons:(id)arg0 ;
-(id)_descriptionStringForReason:(NSInteger)arg0 ;
-(id)_descriptionStringForReferenceTimeEvent:(NSInteger)arg0 ;
-(id)descriptionForTimeBetweenReferenceAndNow;
-(id)init;
-(void)_cancelDelayedLoggingForClosedViewfinder;
-(void)_handleApplicationDidBecomeActive:(id)arg0 ;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_logWarningIfViewfinderStillClosed;
-(void)_performDelayedRemovalOfReason:(id)arg0 ;
-(void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(CGFloat)arg0 ;
-(void)_updateReferenceTimeToNowForEvent:(NSInteger)arg0 ;
-(void)addClosedViewfinderReason:(NSInteger)arg0 ;
-(void)cancelDelayedRemovalOfReason:(NSInteger)arg0 ;
-(void)dealloc;
-(void)removeClosedViewfinderReason:(NSInteger)arg0 ;
-(void)removeClosedViewfinderReason:(NSInteger)arg0 afterDelay:(CGFloat)arg1 ;


@end


#endif