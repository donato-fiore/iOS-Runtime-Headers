// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMVIEWFINDERACTIONINTERVALOMETER_H
#define CAMVIEWFINDERACTIONINTERVALOMETER_H

@protocol CAMViewfinderActionIntervalometerDelegate;

#import <Foundation/Foundation.h>

#import "CAMPreciseTimer.h"
#import "CAMViewfinderViewController.h"

@interface CAMViewfinderActionIntervalometer : NSObject

@property (nonatomic) NSInteger _remaining; // ivar: __remaining
@property (readonly, nonatomic) CAMPreciseTimer *_timer; // ivar: __timer
@property (readonly, nonatomic) CAMViewfinderViewController *_viewfinderViewController; // ivar: __viewfinderViewController
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, weak, nonatomic) NSObject<CAMViewfinderActionIntervalometerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSInteger maximumCount; // ivar: _maximumCount
@property (readonly, nonatomic) NSUInteger successfullActionCount;


-(id)init;
-(id)initWithDelegate:(id)arg0 interval:(CGFloat)arg1 delay:(CGFloat)arg2 maximumCount:(NSInteger)arg3 viewfinderViewController:(id)arg4 ;
-(void)_attemptViewfinderActions;
-(void)manuallyGenerateRequest;
-(void)startGeneratingRequests;
-(void)stopAttemptingActions;


@end


#endif