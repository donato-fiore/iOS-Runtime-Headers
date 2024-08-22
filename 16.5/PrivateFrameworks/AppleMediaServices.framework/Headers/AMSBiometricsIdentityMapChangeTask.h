// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBIOMETRICSIDENTITYMAPCHANGETASK_H
#define AMSBIOMETRICSIDENTITYMAPCHANGETASK_H

@class ACAccount, NSURLSessionTask;


#import "AMSTask.h"
#import "AMSURLSession.h"

@interface AMSBiometricsIdentityMapChangeTask : AMSTask

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task


-(id)initWithAccount:(id)arg0 session:(id)arg1 task:(id)arg2 ;
-(id)perform;


@end


#endif