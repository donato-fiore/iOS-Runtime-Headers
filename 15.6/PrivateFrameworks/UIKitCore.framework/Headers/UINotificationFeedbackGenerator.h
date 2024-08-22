// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINOTIFICATIONFEEDBACKGENERATOR_H
#define UINOTIFICATIONFEEDBACKGENERATOR_H



#import "UIFeedbackGenerator.h"
#import "_UINotificationFeedbackGeneratorConfiguration.h"

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (readonly, nonatomic, getter=_eventConfiguration) _UINotificationFeedbackGeneratorConfiguration *eventConfiguration;


+(Class)_configurationClass;
-(CGFloat)_preparationTimeoutForStyle:(NSInteger)arg0 ;
-(id)_categoryForType:(NSInteger)arg0 ;
-(id)_stats_key;
-(void)_playEventType:(NSInteger)arg0 ;
-(void)_privateNotificationInterrupted:(NSInteger)arg0 ;
-(void)_privateNotificationOccurred:(NSInteger)arg0 ;
-(void)_stopEventType:(NSInteger)arg0 ;
-(void)notificationOccurred:(NSInteger)arg0 ;


@end


#endif