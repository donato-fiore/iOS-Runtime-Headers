// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGOPERATION_H

@protocol PKSubcredentialProvisioningOperationDelegate;

#import <Foundation/Foundation.h>

#import "PKSubcredentialProvisioningConfiguration.h"
#import "PKSubcredentialProvisioningOperationContext.h"

@interface PKSubcredentialProvisioningOperation : NSObject {
    BOOL _inProgress;
}


@property (readonly, nonatomic) BOOL canBeRestarted; // ivar: _canBeRestarted
@property (readonly, nonatomic) BOOL canCancelOperation; // ivar: _canCancelOperation
@property (readonly, nonatomic) PKSubcredentialProvisioningConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PKSubcredentialProvisioningOperationContext *context; // ivar: _context
@property (readonly, weak, nonatomic) NSObject<PKSubcredentialProvisioningOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress;


+(id)operationForState:(NSInteger)arg0 configuration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 context:(id)arg1 delegate:(id)arg2 ;
-(void)advanceToState:(NSInteger)arg0 ;
-(void)cancelOperation;
-(void)failWithError:(id)arg0 ;
-(void)failWithErrorCode:(NSInteger)arg0 description:(id)arg1 ;
-(void)failWithErrorCode:(NSInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 ;
-(void)performOperation;


@end


#endif