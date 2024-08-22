// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSETDEMOACCOUNTTASK_H
#define AMSSETDEMOACCOUNTTASK_H

@class NSString;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSSetDemoAccountTask : AMSTask

@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)initWithUsername:(id)arg0 password:(id)arg1 ;
-(id)performTask;


@end


#endif