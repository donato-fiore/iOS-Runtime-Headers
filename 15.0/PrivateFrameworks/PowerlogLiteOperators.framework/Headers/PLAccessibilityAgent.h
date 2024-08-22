// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCESSIBILITYAGENT_H
#define PLACCESSIBILITYAGENT_H

@class PLAgent, PLCFNotificationOperatorComposition;



@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged; // ivar: _notificationBackgroundContrastChanged
@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged; // ivar: _notificationReduceMotionChanged


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardNameAssistiveTouch;
+(id)entryEventForwardNameBackgroundContrast;
+(id)entryEventForwardNameHandGestures;
+(id)entryEventForwardNameReduceMotion;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventForwardBackgroundContrast;
-(void)logEventForwardReduceMotion;


@end


#endif