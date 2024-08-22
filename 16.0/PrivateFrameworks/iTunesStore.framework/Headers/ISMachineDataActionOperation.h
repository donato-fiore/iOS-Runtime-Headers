// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISMACHINEDATAACTIONOPERATION_H
#define ISMACHINEDATAACTIONOPERATION_H

@class SSMachineDataRequest, NSString;


#import "ISOperation.h"

@interface ISMachineDataActionOperation : ISOperation {
    BOOL _blocksPurchaseRequests;
    BOOL _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    id *_resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}


@property BOOL blocksPurchaseRequests;
@property BOOL hidesServerDrivenDialogs;
@property (readonly) SSMachineDataRequest *machineDataRequest;
@property (copy) id *resultBlock;
@property (readonly) NSString *syncState;
@property (copy) NSString *userAgent;


-(BOOL)_eraseProvisioning;
-(BOOL)_provisionWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldRetryAfterError:(id)arg0 ;
-(BOOL)_syncMachineWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithMachineDataRequest:(id)arg0 ;
-(id)uniqueKey;
-(void)run;


@end


#endif