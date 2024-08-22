// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIDENTITYPROVIDERUSERACCOUNTFETCHOPERATION_H
#define VSIDENTITYPROVIDERUSERACCOUNTFETCHOPERATION_H

@class NSError, NSOperationQueue, NSArray;


#import "VSAsyncOperation.h"
#import "VSIdentityProvider.h"

@interface VSIdentityProviderUserAccountFetchOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (readonly, nonatomic) VSIdentityProvider *provider; // ivar: _provider
@property (retain, nonatomic) NSArray *results; // ivar: _results


-(id)initWithIdentityProvider:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif