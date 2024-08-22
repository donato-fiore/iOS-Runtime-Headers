// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVUIPROOFINGFLOWMANAGER_H
#define CIDVUIPROOFINGFLOWMANAGER_H


#import <Foundation/Foundation.h>

#import "_TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager.h"

@interface CIDVUIProofingFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager *proofingFlowManager; // ivar: _proofingFlowManager


-(NSUInteger)currentProofingEligibilityStatus;
-(id)initWithDelegate:(id)arg0 ;
-(id)proofingFlowViewController;
-(void)proofingFlowAvailability:(id)arg0 ;
-(void)proofingFlowAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)startProofing:(id)arg0 completion:(id)arg1 ;


@end


#endif