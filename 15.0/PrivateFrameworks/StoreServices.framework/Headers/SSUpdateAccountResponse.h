// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSUPDATEACCOUNTRESPONSE_H
#define SSUPDATEACCOUNTRESPONSE_H


#import <Foundation/Foundation.h>

#import "SSAccount.h"

@interface SSUpdateAccountResponse : NSObject

@property (readonly, nonatomic) NSUInteger credentialSource; // ivar: _credentialSource
@property (readonly, nonatomic) SSAccount *updatedAccount; // ivar: _updatedAccount


-(id)initWithUpdatedAccount:(id)arg0 credentialSource:(NSUInteger)arg1 ;


@end


#endif