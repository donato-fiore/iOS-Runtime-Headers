// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVERIFICATIONDATAOPERATION_H
#define VSVERIFICATIONDATAOPERATION_H

@class AKAnisetteProvisioningController;


#import "VSAsyncOperation.h"
#import "VSOptional.h"

@interface VSVerificationDataOperation : VSAsyncOperation

@property (retain, nonatomic) AKAnisetteProvisioningController *provisioningController; // ivar: _provisioningController
@property (retain) VSOptional *result; // ivar: _result


-(id)init;
-(void)_finishWithData:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_finishWithResult:(int)arg0 bytes:(char *)arg1 length:(unsigned int)arg2 ;
-(void)executionDidBegin;


@end


#endif