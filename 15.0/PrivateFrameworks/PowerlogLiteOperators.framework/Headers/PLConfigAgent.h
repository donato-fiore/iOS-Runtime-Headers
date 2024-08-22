// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCONFIGAGENT_H
#define PLCONFIGAGENT_H

@class PLAgent;



@interface PLConfigAgent : PLAgent



+(NSInteger)getOSVersionNumber;
+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitionAdapterInformation;
+(id)entryEventNoneDefinitionConfig;
+(id)entryEventNoneDefinitionPairedDeviceConfig;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)getVersionDirectory:(NSInteger)arg0 ;
+(id)railDefinitions;
+(void)load;
+(void)removeFilesFromPath:(id)arg0 withMaxFiles:(NSInteger)arg1 ;
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
-(id)hardwareModelConfig;
-(id)hwBoardRevision;
-(id)hwConfig;
-(id)init;
-(id)logAndUpdateLastBuild:(id)arg0 ;
-(id)logAndUpdateLastUpgradeTime:(id)arg0 ;
-(id)logAutomatedDeviceGroup;
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
-(void)logEntryToAggD:(id)arg0 ;
-(void)logEventNoneConfig;
-(void)logEventNonePairedDeviceConfig;
-(void)maintainPreUpgradePowerlogs;
-(void)pairStatusDidChange:(id)arg0 ;


@end


#endif