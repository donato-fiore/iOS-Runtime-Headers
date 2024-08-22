// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCURRENTISSUESCHECKER_H
#define FCCURRENTISSUESCHECKER_H

@class NSString;
@protocol FCCurrentIssuesChecker, FCContentContext, FCBundleSubscriptionProviderType;

#import <Foundation/Foundation.h>

#import "FCSubscriptionController.h"
#import "FCIssueReadingHistory.h"

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker>

 {
    id<FCContentContext> *_context;
    FCSubscriptionController *_subscriptionController;
    FCIssueReadingHistory *_issueReadingHistory;
    id<FCBundleSubscriptionProviderType> *_bundleSubscriptionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithContext:(id)arg0 subscriptionController:(id)arg1 issueReadingHistory:(id)arg2 bundleSubscriptionProvider:(id)arg3 ;
-(void)fetchCurrentIssuesWithCompletion:(id)arg0 ;
-(void)fetchUsersCurrentIssuesWithCompletion:(id)arg0 ;


@end


#endif