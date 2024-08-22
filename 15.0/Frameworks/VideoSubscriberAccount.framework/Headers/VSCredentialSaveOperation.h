// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSCREDENTIALSAVEOPERATION_H
#define VSCREDENTIALSAVEOPERATION_H

@class NSArray;


#import "VSAsyncOperation.h"
#import "VSAccountStore.h"
#import "VSOptional.h"

@interface VSCredentialSaveOperation : VSAsyncOperation

@property (retain, nonatomic) VSAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (copy, nonatomic) NSArray *unsavedAccounts; // ivar: _unsavedAccounts


-(id)init;
-(id)initWithUnsavedAccounts:(id)arg0 accountStore:(id)arg1 ;
-(void)_didSaveAccounts:(id)arg0 withResult:(BOOL)arg1 error:(id)arg2 ;
-(void)executionDidBegin;


@end


#endif