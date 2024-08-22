// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFORMAUTOFILLPARSECFEEDBACKPROCESSOR_H
#define WBSFORMAUTOFILLPARSECFEEDBACKPROCESSOR_H

@class NSString;
@protocol WBSFormAutoFillFeedbackProcessor, WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider;

#import <Foundation/Foundation.h>

#import "WBSCrowdsourcedFeedbackDomainNormalizer.h"

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor>

 {
    id<WBSParsecGlobalFeedbackDispatcher> *_globalFeedbackDispatcher;
    NSUInteger _autoFillVersion;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<WBSFormAutoFillFeedbackDomainPolicyProvider> *domainPolicyProvider; // ivar: _domainPolicyProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_feedbackWithCorrectionSet:(id)arg0 includeOrigin:(BOOL)arg1 ;
-(id)init;
-(id)initWithGlobalFeedbackDispatcher:(id)arg0 domainPolicyProvider:(id)arg1 autoFillVersion:(NSUInteger)arg2 ;
-(void)_getFeedbackWithCorrectionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendFeedbackWithCorrectionSet:(id)arg0 ;


@end


#endif