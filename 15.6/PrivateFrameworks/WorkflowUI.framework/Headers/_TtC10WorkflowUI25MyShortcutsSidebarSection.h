// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10WORKFLOWUI25MYSHORTCUTSSIDEBARSECTION_H
#define _TTC10WORKFLOWUI25MYSHORTCUTSSIDEBARSECTION_H

@class SwiftObject;
@protocol WFHealthFeatureObserver;



@interface _TtC10WorkflowUI25MyShortcutsSidebarSection : SwiftObject <WFHealthFeatureObserver>

 {
    ? name;
    ? destinations;
    ? allDestinations;
    ? delegate;
    ? observeChanges;
    ? healthFeatureProvider;
    ? sidebarPreferencesObserver;
}




-(void)healthFeatureAvailability:(id)arg0 sleepOnboardingStatusDidChange:(NSUInteger)arg1 ;


@end


#endif