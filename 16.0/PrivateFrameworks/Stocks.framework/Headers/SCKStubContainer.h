// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKSTUBCONTAINER_H
#define SCKSTUBCONTAINER_H

@class NSArray, NSMutableDictionary;
@protocol SCKContainerProxying;

#import <Foundation/Foundation.h>


@interface SCKStubContainer : NSObject <SCKContainerProxying>



@property (nonatomic) NSInteger accountInfoErrorMode; // ivar: _accountInfoErrorMode
@property (nonatomic) BOOL accountInfoSupportsDeviceToDeviceEncryption; // ivar: _accountInfoSupportsDeviceToDeviceEncryption
@property (copy, nonatomic) NSArray *databaseChangesOperationChangedZoneIDs; // ivar: _databaseChangesOperationChangedZoneIDs
@property (readonly, nonatomic) NSUInteger databaseChangesOperationCount; // ivar: _databaseChangesOperationCount
@property (nonatomic) NSInteger modifyRecordsErrorMode; // ivar: _modifyRecordsErrorMode
@property (readonly, nonatomic) NSUInteger modifyRecordsOperationCount; // ivar: _modifyRecordsOperationCount
@property (readonly, copy, nonatomic) NSArray *modifyRecordsSavedRecords; // ivar: _modifyRecordsSavedRecords
@property (readonly, nonatomic) NSUInteger modifySubscriptionsOperationCount; // ivar: _modifySubscriptionsOperationCount
@property (readonly, copy, nonatomic) NSArray *modifySubscriptionsSavedSubscriptions; // ivar: _modifySubscriptionsSavedSubscriptions
@property (nonatomic) NSInteger modifyZonesErrorMode; // ivar: _modifyZonesErrorMode
@property (readonly, nonatomic) NSUInteger modifyZonesOperationCount; // ivar: _modifyZonesOperationCount
@property (readonly, copy, nonatomic) NSArray *modifyZonesSavedZones; // ivar: _modifyZonesSavedZones
@property (copy, nonatomic) id *willFinishZoneChanges; // ivar: _willFinishZoneChanges
@property (copy, nonatomic) id *willModifyRecords; // ivar: _willModifyRecords
@property (nonatomic) NSInteger zoneChangesErrorMode; // ivar: _zoneChangesErrorMode
@property (readonly, nonatomic) NSUInteger zoneChangesOperationCount; // ivar: _zoneChangesOperationCount
@property (retain, nonatomic) NSMutableDictionary *zoneContentsByZoneID; // ivar: _zoneContentsByZoneID


-(NSInteger)_ckErrorCodeForErrorMode:(NSInteger)arg0 ;
-(id)_errorForErrorMode:(NSInteger)arg0 ;
-(id)_errorForErrorMode:(NSInteger)arg0 itemIDs:(id)arg1 ;
-(id)contentsOfZone:(id)arg0 ;
-(id)contentsOfZone:(id)arg0 withType:(id)arg1 ;
-(id)init;
-(id)recordWithName:(id)arg0 inZone:(id)arg1 ;
-(void)accountInfoWithCompletionHandler:(id)arg0 ;
-(void)addDatabaseOperation:(id)arg0 ;
-(void)setContentsOfZone:(id)arg0 toRecords:(id)arg1 ;


@end


#endif