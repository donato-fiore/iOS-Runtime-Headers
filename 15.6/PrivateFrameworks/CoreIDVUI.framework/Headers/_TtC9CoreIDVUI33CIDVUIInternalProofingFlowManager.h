// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI33CIDVUIINTERNALPROOFINGFLOWMANAGER_H
#define _TTC9COREIDVUI33CIDVUIINTERNALPROOFINGFLOWMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager : NSObject {
    ? proofingFlowManager;
    ? configuration;
    ? externalProofingFlowManager;
    ? delegate;
    ? eligibilityHelper;
}


@property (nonatomic, readonly) NSUInteger proofingEligibilityStatus;


-(id)init;
-(id)initWithDelegate:(id)arg0 externalProofingFlowManager:(id)arg1 ;
-(id)proofingFlowViewController;
-(void)proofingFlowAvailabilityWithCompletion:(id)arg0 ;
-(void)proofingFlowAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)startProofingWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif