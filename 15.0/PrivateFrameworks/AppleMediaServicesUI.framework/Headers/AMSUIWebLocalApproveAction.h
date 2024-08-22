// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBLOCALAPPROVEACTION_H
#define AMSUIWEBLOCALAPPROVEACTION_H

@class NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebLocalApproveAction : AMSUIWebAction

@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif