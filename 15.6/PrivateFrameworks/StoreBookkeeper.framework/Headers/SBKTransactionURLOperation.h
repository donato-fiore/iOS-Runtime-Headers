// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKTRANSACTIONURLOPERATION_H
#define SBKTRANSACTIONURLOPERATION_H

@class ISStoreURLOperation;


#import "SBKRequest.h"

@interface SBKTransactionURLOperation : ISStoreURLOperation

@property (retain, nonatomic) SBKRequest *SBKRequest; // ivar: _SBKRequest
@property (nonatomic) BOOL shouldAuthenticate; // ivar: _shouldAuthenticate


+(id)operationWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)_init;
-(id)description;
-(id)init;


@end


#endif