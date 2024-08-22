// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDACCOUNTCHANGE_H
#define ACDACCOUNTCHANGE_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface ACDAccountChange : NSObject

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) ACAccount *oldAccount; // ivar: _oldAccount


+(id)changeWithChangeType:(int)arg0 account:(id)arg1 oldAccount:(id)arg2 ;
-(id)initWithChangeType:(int)arg0 account:(id)arg1 oldAccount:(id)arg2 ;


@end


#endif