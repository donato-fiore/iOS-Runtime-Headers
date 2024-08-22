// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUACCESSORYDIAGNOSTICSITEMMANAGER_H
#define HUACCESSORYDIAGNOSTICSITEMMANAGER_H

@class HFItemManager, HFAccessoryDiagnosticsControlItem, NSMutableArray, HFItem, HFStaticItem, HMAccessory;



@interface HUAccessoryDiagnosticsItemManager : HFItemManager

@property (nonatomic) BOOL collectionFailed;
@property (nonatomic) BOOL collectionInProgress;
@property (readonly, nonatomic) HFAccessoryDiagnosticsControlItem *diagnosticsModesItem; // ivar: _diagnosticsModesItem
@property (retain, nonatomic) NSMutableArray *downloadedLogs; // ivar: _downloadedLogs
@property (readonly, nonatomic) HFItem *enableAudioClipLoggingItem; // ivar: _enableAudioClipLoggingItem
@property (readonly, nonatomic) HFItem *enableVerboseLoggingItem; // ivar: _enableVerboseLoggingItem
@property (readonly, nonatomic) HFStaticItem *fetchADKSnapshotButtonItem; // ivar: _fetchADKSnapshotButtonItem
@property (readonly, nonatomic) HFStaticItem *fetchManufacturerSnapshotButtonItem; // ivar: _fetchManufacturerSnapshotButtonItem
@property (readonly, nonatomic) HFStaticItem *logCollectionFailedItem; // ivar: _logCollectionFailedItem
@property (readonly, nonatomic) HMAccessory *sourceAccessory; // ivar: _sourceAccessory


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)availableLogs;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(void)_loadDownloadedLogs;
-(void)_registerForExternalUpdates;
-(void)_setLoggingOption:(NSInteger)arg0 enable:(BOOL)arg1 ;
-(void)_unregisterForExternalUpdates;
-(void)beginDiagnosticCollection:(id)arg0 ;
-(void)didChangeNotification:(id)arg0 ;
-(void)recordDownloadedLog:(id)arg0 ;
-(void)setAudioClipLoggingEnabled:(BOOL)arg0 ;
-(void)setVerboseLoggingEnabled:(BOOL)arg0 ;


@end


#endif