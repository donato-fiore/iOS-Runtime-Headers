// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERACCOUNTUPDATEREQUEST_H
#define VSUSERACCOUNTUPDATEREQUEST_H

@class NSError;

#import <Foundation/Foundation.h>

#import "VSUserAccount.h"

@interface VSUserAccountUpdateRequest : NSObject

@property (retain, nonatomic) NSError *updateError; // ivar: _updateError
@property (retain, nonatomic) VSUserAccount *updatedUserAccount; // ivar: _updatedUserAccount
@property (retain, nonatomic) VSUserAccount *userAccount; // ivar: _userAccount


-(id)description;
-(id)initWithUserAccount:(id)arg0 ;


@end


#endif