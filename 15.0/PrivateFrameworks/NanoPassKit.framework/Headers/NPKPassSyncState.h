// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPASSSYNCSTATE_H
#define NPKPASSSYNCSTATE_H

@class NSData, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *syncStateHash;
@property (retain, nonatomic) NSMutableDictionary *syncStateItems; // ivar: _syncStateItems


+(BOOL)supportsSecureCoding;
-(BOOL)diffWithBaselineState:(id)arg0 representsMaterialDifferenceFromState:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassSyncState:(id)arg0 ;
-(BOOL)stateContainsSyncStateItem:(id)arg0 ;
-(BOOL)stateIsSubsetOfUnionOfPassSyncStates:(id)arg0 ;
-(NSUInteger)hash;
-(id)commonBaselinePassSyncStateWithState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasses:(id)arg0 ;
-(id)initWithProtoSyncState:(id)arg0 ;
-(id)initWithSyncStateItems:(id)arg0 ;
-(id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg0 ;
-(id)passSyncStateByApplyingChange:(id)arg0 ;
-(id)passSyncStateByRemovingPassWithUniqueID:(id)arg0 ;
-(id)protoSyncState;
-(void)compareWithBaselinePassSyncState:(id)arg0 outAddedPassUniqueIDs:(*id)arg1 outUpdatedPassUniqueIDs:(*id)arg2 outRemovedPassUniqueIDs:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif