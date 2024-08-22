// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCALQUICKTYPEBROKER_H
#define PPLOCALQUICKTYPEBROKER_H

@class _PASLock;
@protocol PPFeedbackAccepting, PPFeedbackProcessing;

#import <Foundation/Foundation.h>

#import "PPQuickTypeNavigationServant.h"
#import "PPQuickTypeContactsServant.h"
#import "PPQuickTypeEventsServant.h"
#import "PPQuickTypeConnectionsServant.h"
#import "PPQuickTypeURLServant.h"

@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing>

 {
    PPQuickTypeNavigationServant *_navigationServant;
    PPQuickTypeContactsServant *_contactsServant;
    PPQuickTypeEventsServant *_eventsServant;
    PPQuickTypeConnectionsServant *_connectionsServant;
    PPQuickTypeURLServant *_urlServant;
    _PASLock *_cacheLock;
}




+(id)sharedInstance;
-(id)filterFeedback:(id)arg0 ;
-(id)init;
-(void)hibernateWithCompletion:(id)arg0 ;
-(void)processFeedback:(id)arg0 ;
-(void)quickTypeItemsWithLanguageModelingTokens:(id)arg0 localeIdentifier:(id)arg1 recipients:(id)arg2 bundleIdentifier:(id)arg3 limit:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)recentQuickTypeItemsForRecipients:(id)arg0 completion:(id)arg1 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;
-(void)warmUpWithCompletion:(id)arg0 ;


@end


#endif