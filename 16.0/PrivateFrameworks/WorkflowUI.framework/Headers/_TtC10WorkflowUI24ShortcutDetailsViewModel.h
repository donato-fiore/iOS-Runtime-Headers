// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10WORKFLOWUI24SHORTCUTDETAILSVIEWMODEL_H
#define _TTC10WORKFLOWUI24SHORTCUTDETAILSVIEWMODEL_H

@class SwiftObject;
@protocol WFHealthFeatureObserver;



@interface _TtC10WorkflowUI24ShortcutDetailsViewModel : SwiftObject <WFHealthFeatureObserver>

 {
    ? workflow;
    ? healthFeatureAvailability;
    ? observers;
    ? _workflowTypes;
    ? _importQuestions;
    ? _inputTypes;
}




-(void)healthFeatureAvailability:(id)arg0 sleepOnboardingStatusDidChange:(NSUInteger)arg1 ;


@end


#endif