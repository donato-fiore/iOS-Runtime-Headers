// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSYNCACCOUNTFLAGSTASK_H
#define AMSSYNCACCOUNTFLAGSTASK_H

@class ACAccount;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSSyncAccountFlagsTask : AMSTask

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag


-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)performSync;


@end


#endif