// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALPROVISIONINGPREWARMSESSIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGPREWARMSESSIONOPERATION_H



#import "PKSubcredentialProvisioningPairingSessionOperation.h"

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}




-(BOOL)canCancelOperation;
-(id)issuerName;
-(void)appletSubcredentialPairingSession:(id)arg0 didFinishPreWarmWithResult:(id)arg1 ;
-(void)cancelOperation;
-(void)performOperation;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)startPrewarming;


@end


#endif