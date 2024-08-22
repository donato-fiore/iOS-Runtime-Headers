// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHCONTEXT_H
#define WBSPASSWORDBREACHCONTEXT_H


#import <Foundation/Foundation.h>

#import "WBSPasswordBreachConfiguration.h"
#import "WBSPasswordBreachCryptographicOperations.h"
#import "WBSPasswordBreachStore.h"

@interface WBSPasswordBreachContext : NSObject

@property (readonly, nonatomic) WBSPasswordBreachConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) WBSPasswordBreachCryptographicOperations *cryptographicOperations; // ivar: _cryptographicOperations
@property (readonly, nonatomic) WBSPasswordBreachStore *store; // ivar: _store


-(id)initWithConfiguration:(id)arg0 store:(id)arg1 ;


@end


#endif