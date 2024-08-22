// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORETRANSACTIONACTIONS_H
#define HMDBACKINGSTORETRANSACTIONACTIONS_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;


#import "HMDBackingStoreTransactionOptions.h"
#import "HMDBackingStore.h"

@interface HMDBackingStoreTransactionActions : HMDBackingStoreTransactionOptions {
    BOOL _postApplyActionsInvoked;
    NSMutableArray *_postApplyActions;
    NSMutableSet *_postApplyActionNames;
}


@property (readonly, weak, nonatomic) HMDBackingStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) BOOL changed; // ivar: _changed
@property (readonly, nonatomic) BOOL local; // ivar: _local
@property (readonly, nonatomic) BOOL saveToAssistant; // ivar: _saveToAssistant
@property (readonly, nonatomic) BOOL saveToSharedUserAccount; // ivar: _saveToSharedUserAccount
@property (readonly, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


+(id)logCategory;
-(BOOL)addPostApplyActionIfNotPresent:(id)arg0 usingBlock:(id)arg1 ;
-(id)description;
-(id)initWithBackingStore:(id)arg0 options:(id)arg1 ;
-(id)logIdentifier;
-(void)addPostApplyActionUsingBlock:(id)arg0 ;
-(void)invokePostApplyActions;
-(void)markChanged;
-(void)markLocalChanged;
-(void)markSaveToAssistant;
-(void)markSaveToSharedUserAccount;


@end


#endif