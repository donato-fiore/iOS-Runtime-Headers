// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTRANSIENTDATASOURCE_H
#define CAMTRANSIENTDATASOURCE_H

@class NSMutableArray, NSMutableDictionary, NSHashTable, NSString, NSSet;
@protocol PUTransientDataSource;

#import <Foundation/Foundation.h>


@interface CAMTransientDataSource : NSObject <PUTransientDataSource>



@property (readonly, nonatomic) NSMutableArray *_assetUUIDs; // ivar: __assetUUIDs
@property (readonly, nonatomic) NSMutableDictionary *_assetsByUUID; // ivar: __assetsByUUID
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier; // ivar: __enqueuedBurstAssetUUIDByBurstIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID; // ivar: __enqueuedBurstConvertiblesByAssetUUID
@property (nonatomic, setter=_setNestedPerformChanges:) NSInteger _nestedPerformChanges; // ivar: __nestedPerformChanges
@property (readonly, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (nonatomic, setter=_setPendingChangeNotifications:) NSInteger _pendingChangeNotifications; // ivar: __pendingChangeNotifications
@property (readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // ivar: __representativeAssetsByBurstIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingBurstIdentifiers;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_removeAssetWithUUID:(id)arg0 ;
-(id)existingAssetForUUID:(id)arg0 ;
-(id)existingAssetUUIDs;
-(id)existingRepresentativeAssetForBurstIdentifier:(id)arg0 ;
-(id)init;
-(id)insertAssetWithConvertible:(id)arg0 ;
-(id)transientAssetMapping;
-(id)transientBurstMapping;
-(id)uuids;
-(void)_notifyObserversOfDataSourceChange;
-(void)enqueuePendingBurstAssetWithConvertible:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)processPendingBurstAssets;
-(void)registerChangeObserver:(id)arg0 ;
-(void)removeAllAssets;
-(void)removeAssetWithUUID:(id)arg0 ;
-(void)removeRepresentativeAssetForBurstIdentifier:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)updateAssetWithConvertible:(id)arg0 ;


@end


#endif