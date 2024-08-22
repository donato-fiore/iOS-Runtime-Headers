// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPASSSYNCSTATE_H
#define NPKPASSSYNCSTATE_H

@class NSData, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *syncStateHash;
@property (retain, nonatomic) NSMutableDictionary *syncStateItems; // ivar: _syncStateItems
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(NSUInteger)minRemoteDevicePassSyncStateVersionSupport;
+(id)_currentActiveDevice;
+(id)_deviceDomainAccessor;
+(void)setMinRemoteDevicePassSyncStateVersionSupport:(NSUInteger)arg0 ;
-(BOOL)diffWithBaselineState:(id)arg0 representsMaterialDifferenceFromState:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassSyncState:(id)arg0 ;
-(BOOL)stateContainsSyncStateItem:(id)arg0 ;
-(BOOL)stateIsSubsetOfUnionOfPassSyncStates:(id)arg0 ;
-(NSUInteger)hash;
-(id)commonBaselinePassSyncStateWithState:(id)arg0 version:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPasses:(id)arg0 ;
-(id)initWithPasses:(id)arg0 version:(NSUInteger)arg1 ;
-(id)initWithProtoSyncState:(id)arg0 ;
-(id)initWithSyncStateItems:(id)arg0 ;
-(id)initWithSyncStateItems:(id)arg0 version:(NSUInteger)arg1 ;
-(id)initWithVersion:(NSUInteger)arg0 ;
-(id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg0 ;
-(id)passSyncStateByApplyingChange:(id)arg0 ;
-(id)passSyncStateByRemovingPassWithUniqueID:(id)arg0 ;
-(id)protoSyncState;
-(void)_commonInitWithVersion:(NSUInteger)arg0 ;
-(void)compareWithBaselinePassSyncState:(id)arg0 outAddedSyncItems:(*id)arg1 outUpdatedSyncItems:(*id)arg2 outRemovedSyncItems:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif