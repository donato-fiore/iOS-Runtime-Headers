// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBFETCHATTESTATIONVERSIONACTION_H
#define AMSUIWEBFETCHATTESTATIONVERSIONACTION_H

@class ACAccount;


#import "AMSUIWebAction.h"

@interface AMSUIWebFetchAttestationVersionAction : AMSUIWebAction

@property (retain, nonatomic) ACAccount *account; // ivar: _account


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)minimumVersions;
-(id)runAction;


@end


#endif