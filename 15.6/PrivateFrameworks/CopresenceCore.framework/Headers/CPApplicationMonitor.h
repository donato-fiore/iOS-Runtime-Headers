// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPAPPLICATIONMONITOR_H
#define CPAPPLICATIONMONITOR_H

@protocol CPConversationManagerDataSourceObserver;

#import <Foundation/Foundation.h>


@interface CPApplicationMonitor : NSObject <CPConversationManagerDataSourceObserver>

 {
    ? appPolicyManager;
    ? applicationController;
    ? queue;
    ? processMonitor;
}




-(id)init;
-(id)initWithApplicationController:(id)arg0 queue:(id)arg1 ;
-(void)conversationManager:(id)arg0 activityAuthorizationChangedForBundleIdentifier:(id)arg1 ;
-(void)conversationManager:(id)arg0 conversationChanged:(id)arg1 ;
-(void)dealloc;


@end


#endif