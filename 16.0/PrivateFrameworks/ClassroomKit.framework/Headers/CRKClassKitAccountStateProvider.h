// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCLASSKITACCOUNTSTATEPROVIDER_H
#define CRKCLASSKITACCOUNTSTATEPROVIDER_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface CRKClassKitAccountStateProvider : NSObject

@property (nonatomic) NSInteger accountState; // ivar: _accountState
@property (readonly, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore


-(NSInteger)currentAccountState;
-(id)init;
-(void)accountStoreDidChange:(id)arg0 ;
-(void)beginObservingAccountChanges;
-(void)dealloc;
-(void)endObservingAccountChanges;
-(void)updateAccountState;


@end


#endif