// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIEWFINDERACTIONINTERVALOMETER_H
#define CAMVIEWFINDERACTIONINTERVALOMETER_H

@protocol CAMViewfinderActionIntervalometerDelegate;

#import <Foundation/Foundation.h>

#import "CAMPreciseTimer.h"
#import "CAMViewfinderViewController.h"

@interface CAMViewfinderActionIntervalometer : NSObject

@property (copy, nonatomic) id *_actionBlock; // ivar: __actionBlock
@property (nonatomic) NSInteger _remaining; // ivar: __remaining
@property (readonly, nonatomic) CAMPreciseTimer *_timer; // ivar: __timer
@property (readonly, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // ivar: __viewfinderViewController
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, weak, nonatomic) NSObject<CAMViewfinderActionIntervalometerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSInteger maximumCount; // ivar: _maximumCount


-(id)init;
-(id)initWithDelegate:(id)arg0 interval:(CGFloat)arg1 delay:(CGFloat)arg2 maximumCount:(NSInteger)arg3 viewfinderViewController:(id)arg4 actionBlock:(id)arg5 ;
-(void)_attemptViewfinderActions;
-(void)_stopAttemptingActions;
-(void)manuallyGenerateRequest;
-(void)startGeneratingRequests;


@end


#endif