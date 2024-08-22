// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSIDSSYNCENGINEMETADATASTORE_H
#define DNDSIDSSYNCENGINEMETADATASTORE_H

@class NSMutableDictionary, NSMutableSet, NSURL, NSString;
@protocol DNDSIDSSyncEngineMetadataStoring;

#import <Foundation/Foundation.h>


@interface DNDSIDSSyncEngineMetadataStore : NSObject <DNDSIDSSyncEngineMetadataStoring>

 {
    NSMutableDictionary *_recordMetadataByRecordID;
    NSMutableDictionary *_recordIDSyncDatesByPairedDeviceIdentifier;
    NSMutableSet *_initialSyncPairedDeviceIdentifiers;
    NSURL *_url;
    CGFloat _deviceObsoletionDuration;
    CGFloat _tombstoneObsoletionDuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_areSyncDatesValidAtDate:(id)arg0 ;
-(BOOL)_canTombstoneBeRemovedWithRecordID:(id)arg0 ;
-(BOOL)_isMetadataValidAtDate:(id)arg0 ;
-(BOOL)_isPairedDeviceOutdated:(id)arg0 ;
-(BOOL)hasMetadataForPairedDeviceIdentifier:(id)arg0 ;
-(BOOL)hasPerformedInitialSyncForPairedDeviceIdentifier:(id)arg0 ;
-(BOOL)isValidAtDate:(id)arg0 ;
-(id)deletedRecordIDsForPairedDeviceIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDeviceObsoletionDuration:(CGFloat)arg0 tombstoneObsoletionDuration:(CGFloat)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)modifiedRecordIDsForPairedDeviceIdentifier:(id)arg0 ;
-(id)recordMetadataForRecordID:(id)arg0 ;
-(id)unknownRecordIDsInRecordIDs:(id)arg0 ;
-(void)_forgetMetadataForRecordID:(id)arg0 ;
-(void)_forgetObsoleteTombstones;
-(void)_forgetRecordID:(id)arg0 ;
-(void)_forgetSyncDatesForDevicesWithoutInitialSync;
-(void)_forgetSyncDatesForOutdatedDevices;
-(void)_forgetSyncDatesForRecordID:(id)arg0 ;
-(void)_parseDictionary:(id)arg0 ;
-(void)_read;
-(void)_write;
-(void)garbageCollect;
-(void)purge;
-(void)removePairedDeviceIdentifier:(id)arg0 ;
-(void)setDeletedAtDate:(id)arg0 forRecordIDs:(id)arg1 ;
-(void)setLastModifiedDate:(id)arg0 forRecordIDs:(id)arg1 ;
-(void)setPerformedInitialSyncForPairedDeviceIdentifier:(id)arg0 ;
-(void)setSyncDate:(id)arg0 forRecordIDs:(id)arg1 forPairedDeviceIdentifier:(id)arg2 ;
-(void)setSyncDate:(id)arg0 forRecordsMatchingMetadata:(id)arg1 forPairedDeviceIdentifier:(id)arg2 ;
-(void)updateMetadata:(id)arg0 ;


@end


#endif