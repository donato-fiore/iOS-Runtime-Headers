// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCONFIGAGENT_H
#define PLCONFIGAGENT_H

@class PLAgent, PLCFNotificationOperatorComposition, PLXPCListenerOperatorComposition;



@interface PLConfigAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardClicks; // ivar: _notificationKeyboardClicks
@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardHaptics; // ivar: _notificationKeyboardHaptics
@property (retain) PLXPCListenerOperatorComposition *photoSharingListener; // ivar: _photoSharingListener


+(NSInteger)getOSVersionNumber;
+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionKeyboardClicks;
+(id)entryEventForwardDefinitionKeyboardHaptics;
+(id)entryEventForwardDefinitionPhotoSharing;
+(id)entryEventForwardDefinitions;
+(id)entryEventForwardDefintionRinger;
+(id)entryEventNoneDefinitionAdapterInformation;
+(id)entryEventNoneDefinitionConfig;
+(id)entryEventNoneDefinitionPairedDeviceConfig;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)getVersionDirectory:(NSInteger)arg0 ;
+(id)railDefinitions;
+(void)load;
+(void)removeFilesFromPath:(id)arg0 withMaxFiles:(NSInteger)arg1 ;
+(void)resetRAPIDTaskingConfig;
-(BOOL)disableCABlanking;
-(BOOL)noWatchdogs;
-(CGFloat)logDeviceDiskSize;
-(NSInteger)autolockTime;
-(NSInteger)checkAndUpdateOSVersion;
-(NSUInteger)getEnclosureMaterial;
-(NSUInteger)volumeFreespace:(id)arg0 ;
-(id)baseband;
-(id)basebandFirmware;
-(id)bootArgs;
-(id)buildVersion;
-(id)crashReporterKey;
-(id)deviceName;
-(id)deviceShutdownReasons;
-(id)hwBoardRevision;
-(id)hwConfig;
-(id)init;
-(id)logAndUpdateLastBuild:(id)arg0 ;
-(id)logAndUpdateLastUpgradeTime:(id)arg0 ;
-(id)logIcloudAccountType;
-(id)logLastBackupTime;
-(id)seedGroup;
-(int)getDeviceType;
-(int)getOSVariant;
-(void)cleanupOldPowerlogs;
-(void)copyPowerlogsForPreUpgradeOSVersion:(NSInteger)arg0 ;
-(void)dealloc;
-(void)fileSizeSafeguards;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEntryToCA:(id)arg0 ;
-(void)logEventForwardKeyboardClicks;
-(void)logEventForwardKeyboardHaptics;
-(void)logEventForwardPhotoSharing:(id)arg0 ;
-(void)logEventForwardRingerState;
-(void)logEventNoneConfig;
-(void)logEventNonePairedDeviceConfig;
-(void)logToPPTBuild:(id)arg0 atDate:(id)arg1 ;
-(void)maintainPreUpgradePowerlogs;
-(void)pairStatusDidChange:(id)arg0 ;


@end


#endif