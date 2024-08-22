// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTLISTACTIONAUTHORIZATIONCONTEXT_H
#define CNCONTACTLISTACTIONAUTHORIZATIONCONTEXT_H

@protocol CNContactListAction;

#import <Foundation/Foundation.h>


@interface CNContactListActionAuthorizationContext : NSObject

@property (retain, nonatomic) NSObject<CNContactListAction> *action; // ivar: _action
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif