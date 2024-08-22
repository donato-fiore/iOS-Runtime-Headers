// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMAUTOFILLPARSECDOMAINPOLICYPROVIDER_H
#define WBSFORMAUTOFILLPARSECDOMAINPOLICYPROVIDER_H

@class NSString;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider, WBSCrowdsourcedFeedbackAllowList;

#import <Foundation/Foundation.h>


@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>

 {
    id<WBSCrowdsourcedFeedbackAllowList> *_feedbackAllowList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFeedbackAllowList:(id)arg0 ;
-(void)autoFillFeedbackProcessor:(id)arg0 determineWhetherToSendFeedbackForDomain:(id)arg1 resultHandler:(id)arg2 ;
-(void)getLastPolicyRetrievalURLStringWithResultHandler:(id)arg0 ;
-(void)setPoliciesWithJSONData:(id)arg0 retrievalURLString:(id)arg1 ;


@end


#endif