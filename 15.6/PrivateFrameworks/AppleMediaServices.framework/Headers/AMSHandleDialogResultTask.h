// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSHANDLEDIALOGRESULTTASK_H
#define AMSHANDLEDIALOGRESULTTASK_H

@class ACAccount, NSError, NSString;
@protocol AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"
#import "AMSDialogRequest.h"
#import "AMSDialogResult.h"

@interface AMSHandleDialogResultTask : AMSTask

@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *proxyBundleId; // ivar: _proxyBundleId
@property (readonly, nonatomic) AMSDialogRequest *request;
@property (readonly, nonatomic) AMSDialogResult *result; // ivar: _result


-(id)initWithRequest:(id)arg0 result:(id)arg1 error:(id)arg2 bag:(id)arg3 ;
-(id)initWithResult:(id)arg0 bag:(id)arg1 ;
-(id)perform;


@end


#endif