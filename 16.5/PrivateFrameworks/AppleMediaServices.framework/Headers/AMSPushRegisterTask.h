// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPUSHREGISTERTASK_H
#define AMSPUSHREGISTERTASK_H

@class ACAccount, NSString, NSData;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSPushRegisterTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSData *token; // ivar: _token


-(id)initWithAccount:(id)arg0 token:(id)arg1 environment:(id)arg2 bag:(id)arg3 ;
-(id)performTask;


@end


#endif