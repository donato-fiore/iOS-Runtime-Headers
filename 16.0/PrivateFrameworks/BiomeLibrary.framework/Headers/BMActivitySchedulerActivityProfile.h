// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMACTIVITYSCHEDULERACTIVITYPROFILE_H
#define BMACTIVITYSCHEDULERACTIVITYPROFILE_H

@class BMEventBase, NSString, NSDate;
@protocol BMStoreData;



@interface BMActivitySchedulerActivityProfile : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_endTime;
    CGFloat _raw_endTime;
    BOOL _hasRaw_startTime;
    CGFloat _raw_startTime;
}


@property (readonly, nonatomic) int CPUAwakeTime; // ivar: _CPUAwakeTime
@property (readonly, nonatomic) CGFloat CPUTime; // ivar: _CPUTime
@property (readonly, nonatomic) NSString *activityname; // ivar: _activityname
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int dirtyMemoryDelta; // ivar: _dirtyMemoryDelta
@property (readonly, nonatomic) int endBatteryTemperature; // ivar: _endBatteryTemperature
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) BOOL endedInIdle; // ivar: _endedInIdle
@property (readonly, nonatomic) BOOL endedOnBattery; // ivar: _endedOnBattery
@property (nonatomic) BOOL hasCPUAwakeTime; // ivar: _hasCPUAwakeTime
@property (nonatomic) BOOL hasCPUTime; // ivar: _hasCPUTime
@property (nonatomic) BOOL hasCompleted; // ivar: _hasCompleted
@property (nonatomic) BOOL hasDirtyMemoryDelta; // ivar: _hasDirtyMemoryDelta
@property (nonatomic) BOOL hasEndBatteryTemperature; // ivar: _hasEndBatteryTemperature
@property (nonatomic) BOOL hasEndedInIdle; // ivar: _hasEndedInIdle
@property (nonatomic) BOOL hasEndedOnBattery; // ivar: _hasEndedOnBattery
@property (nonatomic) BOOL hasNetworkProfSuccess; // ivar: _hasNetworkProfSuccess
@property (nonatomic) BOOL hasQosBackground; // ivar: _hasQosBackground
@property (nonatomic) BOOL hasQosLegacy; // ivar: _hasQosLegacy
@property (nonatomic) BOOL hasQosUserInit; // ivar: _hasQosUserInit
@property (nonatomic) BOOL hasRunTime; // ivar: _hasRunTime
@property (nonatomic) BOOL hasRusageProfSuccess; // ivar: _hasRusageProfSuccess
@property (nonatomic) BOOL hasServicedEnergy; // ivar: _hasServicedEnergy
@property (nonatomic) BOOL hasSessionProfSuccess; // ivar: _hasSessionProfSuccess
@property (nonatomic) BOOL hasStartBatteryTemperature; // ivar: _hasStartBatteryTemperature
@property (nonatomic) BOOL hasStartedInIdle; // ivar: _hasStartedInIdle
@property (nonatomic) BOOL hasStartedOnBattery; // ivar: _hasStartedOnBattery
@property (nonatomic) BOOL hasVersion; // ivar: _hasVersion
@property (nonatomic) BOOL hasWifiDown; // ivar: _hasWifiDown
@property (nonatomic) BOOL hasWifiUp; // ivar: _hasWifiUp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL networkProfSuccess; // ivar: _networkProfSuccess
@property (readonly, nonatomic) CGFloat qosBackground; // ivar: _qosBackground
@property (readonly, nonatomic) CGFloat qosLegacy; // ivar: _qosLegacy
@property (readonly, nonatomic) CGFloat qosUserInit; // ivar: _qosUserInit
@property (readonly, nonatomic) CGFloat runTime; // ivar: _runTime
@property (readonly, nonatomic) BOOL rusageProfSuccess; // ivar: _rusageProfSuccess
@property (readonly, nonatomic) int servicedEnergy; // ivar: _servicedEnergy
@property (readonly, nonatomic) BOOL sessionProfSuccess; // ivar: _sessionProfSuccess
@property (readonly, nonatomic) int startBatteryTemperature; // ivar: _startBatteryTemperature
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) BOOL startedInIdle; // ivar: _startedInIdle
@property (readonly, nonatomic) BOOL startedOnBattery; // ivar: _startedOnBattery
@property (readonly) Class superclass;
@property (readonly, nonatomic) int version; // ivar: _version
@property (readonly, nonatomic) int wifiDown; // ivar: _wifiDown
@property (readonly, nonatomic) int wifiUp; // ivar: _wifiUp


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 activityname:(id)arg1 completed:(id)arg2 CPUAwakeTime:(id)arg3 CPUTime:(id)arg4 endBatteryTemperature:(id)arg5 endTime:(id)arg6 endedInIdle:(id)arg7 endedOnBattery:(id)arg8 networkProfSuccess:(id)arg9 qosBackground:(id)arg10 qosLegacy:(id)arg11 qosUserInit:(id)arg12 runTime:(id)arg13 rusageProfSuccess:(id)arg14 servicedEnergy:(id)arg15 sessionProfSuccess:(id)arg16 startBatteryTemperature:(id)arg17 startTime:(id)arg18 startedInIdle:(id)arg19 startedOnBattery:(id)arg20 version:(id)arg21 wifiDown:(id)arg22 wifiUp:(id)arg23 dirtyMemoryDelta:(id)arg24 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif