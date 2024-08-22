// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIDSACCOUNTSSTATE_H
#define CRKIDSACCOUNTSSTATE_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRKIDSAccountsState : NSObject

@property (readonly, copy, nonatomic) NSSet *activeLoginIDs; // ivar: _activeLoginIDs
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy, nonatomic) NSSet *inactiveLoginIDs; // ivar: _inactiveLoginIDs
@property (readonly, nonatomic) NSUInteger summary;


+(id)stateForAccounts:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithActiveLoginIDs:(id)arg0 inactiveLoginIDs:(id)arg1 ;


@end


#endif