// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONMANAGEMENTDEMOTIONALERTCONTROLLER_H
#define NCNOTIFICATIONMANAGEMENTDEMOTIONALERTCONTROLLER_H



#import "NCNotificationManagementAlertController.h"

@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController

@property (nonatomic) BOOL includeExplanation; // ivar: _includeExplanation


-(id)initWithRequest:(id)arg0 withPresentingView:(id)arg1 settingsDelegate:(id)arg2 includeExplanation:(BOOL)arg3 ;
-(void)_configureView;


@end


#endif