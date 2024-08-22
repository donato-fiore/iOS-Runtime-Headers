// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIACCOUNTSFACADE_H
#define CNUIACCOUNTSFACADE_H

@class ACAccountStore;

#import <Foundation/Foundation.h>

#import "CNUIAccountsFacadeRequestRunner.h"

@interface CNUIAccountsFacade : NSObject

@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner; // ivar: _requestRunner


-(id)init;
-(id)initWithAccountStore:(id)arg0 requestRunner:(id)arg1 ;
-(void)fetchiCloudFamilyMembersWithCompletionHandler:(id)arg0 ;


@end


#endif