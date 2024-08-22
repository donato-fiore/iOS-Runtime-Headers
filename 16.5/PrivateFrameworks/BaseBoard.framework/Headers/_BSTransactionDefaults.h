// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BSTRANSACTIONDEFAULTS_H
#define _BSTRANSACTIONDEFAULTS_H



#import "BSAbstractDefaultDomain.h"

@interface _BSTransactionDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isAuditHistoryEnabled) BOOL auditHistoryEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif