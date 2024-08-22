// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSANISETTEPROVISIONTASK_H
#define AMSANISETTEPROVISIONTASK_H

@class ACAccount, NSData;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSAnisetteProvisionTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)_processFinishProvisioningResult:(id)arg0 sessionID:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_createFinishProvisioningRequestWithClientData:(id)arg0 error:(*id)arg1 ;
-(id)_startProvisioningWithOutputSessionID:(*unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 type:(NSInteger)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)performProvisioning;


@end


#endif