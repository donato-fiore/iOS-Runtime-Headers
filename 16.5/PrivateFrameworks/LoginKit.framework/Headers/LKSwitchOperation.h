// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LKSWITCHOPERATION_H
#define LKSWITCHOPERATION_H

@class NSArray, NSMutableArray;


#import "LKOperation.h"
#import "LKRecoverEMCSOperation.h"

@interface LKSwitchOperation : LKOperation

@property (readonly, nonatomic) NSArray *keychainItemsAddedAfterRecoverEMCS;
@property (retain, nonatomic) NSMutableArray *mutableKeychainItemsAddedAfterRecoverEMCS; // ivar: _mutableKeychainItemsAddedAfterRecoverEMCS
@property (readonly, nonatomic) LKRecoverEMCSOperation *recoverEMCSOperation; // ivar: _recoverEMCSOperation
@property (readonly, nonatomic) NSUInteger switchType; // ivar: _switchType


-(id)dictionary;
-(id)init;
-(void)addKeychainItemAdditionEvent:(id)arg0 ;
-(void)removeLastKeychainItemAdditionEvent;


@end


#endif