// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACCOUNTSAVEOPERATION_H
#define VSACCOUNTSAVEOPERATION_H

@class NSOperation, NSArray;


#import "VSAsyncOperation.h"
#import "VSOptional.h"
#import "VSPersistentStorage.h"
#import "VSAccountChannels.h"

@interface VSAccountSaveOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperation *currentOperation; // ivar: _currentOperation
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (copy, nonatomic) NSArray *unsavedAccounts; // ivar: _unsavedAccounts
@property (retain, nonatomic) VSAccountChannels *unsavedChannels; // ivar: _unsavedChannels


-(id)init;
-(id)initWithUnsavedAccounts:(id)arg0 channels:(id)arg1 storage:(id)arg2 ;
-(void)_startAccountChannelsSaveOperation;
-(void)_startCredentialSaveOperation;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif