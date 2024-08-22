// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMETRICSFORMATTERJSON_H
#define PLMETRICSFORMATTERJSON_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface PLMetricsFormatterJSON : NSObject {
    NSMutableDictionary *allMetrics;
    NSMutableArray *metricArray;
    NSArray *appTimeMapping;
    NSArray *appBGTimeMapping;
    NSArray *appBGTimeUpMapping;
    NSArray *appTimeUnpluggedMapping;
    NSArray *appTimeLocationActivityMapping;
    NSArray *appTimeCellularConditionMapping;
    NSArray *appNetworkIOWifiMapping;
    NSArray *appNetworkIOCellularMapping;
    NSArray *appDisplayAPLMapping;
    NSMutableArray *appEnergyFGMapping;
    NSMutableArray *appEnergyBGMapping;
    NSMutableArray *appEnergyTotalMapping;
    NSMutableArray *appEnergyBGAudioMapping;
    NSMutableArray *appEnergyBGLocationMapping;
    NSArray *diskIOMapping;
    NSArray *memoryMapping;
    char tmpFilePath;
}


@property (retain) NSDate *logFileTimeStamp; // ivar: _logFileTimeStamp


+(id)pruneDictionary:(id)arg0 withAllowlist:(id)arg1 ;
-(BOOL)checkKeyExistence:(id)arg0 secondLevel:(id)arg1 dictToCheck:(id)arg2 ;
-(BOOL)moveLogFile;
-(BOOL)testAllMetrics;
-(BOOL)writeSessionFile;
-(id)createHeaderForSessionsFile;
-(id)customRound:(int)arg0 precision:(int)arg1 ;
-(id)getCurrentTimeFormatted:(BOOL)arg0 ;
-(id)getFileHandle;
-(id)getOSVersion;
-(id)init;
-(id)metricsToStringAsJSON;
-(id)roundArrayValuesToNearestX:(id)arg0 precision:(int)arg1 ;
-(id)sanitizeDictionary:(id)arg0 ;
-(void)addAllMetrics:(id)arg0 signpostData:(id)arg1 ;
-(void)addAppEnergy:(id)arg0 userData:(id)arg1 ;
-(void)addAppMemoryKeys:(id)arg0 userData:(id)arg1 ;
-(void)addAppMetaData:(id)arg0 userData:(id)arg1 ;
-(void)addAppMetric:(id)arg0 ;
-(void)addAppPerformanceKeysActivations:(id)arg0 activationData:(id)arg1 ;
-(void)addAppPerformanceKeysExits:(id)arg0 processExitData:(id)arg1 ;
-(void)addAppPerformanceKeysGlitch:(id)arg0 scrollGlitchData:(id)arg1 ;
-(void)addAppPerformanceKeysHang:(id)arg0 userData:(id)arg1 hangTimeData:(id)arg2 ;
-(void)addAppPerformanceKeysLaunch:(id)arg0 userData:(id)arg1 launchTimeData:(id)arg2 ;
-(void)addAppPerformanceKeysResume:(id)arg0 userData:(id)arg1 resumeTimeData:(id)arg2 ;
-(void)addAppTime:(id)arg0 userData:(id)arg1 ;
-(void)addDiskIO:(id)arg0 userData:(id)arg1 ;
-(void)addDisplayAPL:(id)arg0 userData:(id)arg1 ;
-(void)addGlobalMetaData:(id)arg0 ;
-(void)addNetworkIO:(id)arg0 userData:(id)arg1 ;
-(void)addPerformanceMetrics:(id)arg0 userData:(id)arg1 signpostData:(id)arg2 ;
-(void)addPowerMetrics:(id)arg0 userData:(id)arg1 ;
-(void)addSubKeys:(id)arg0 extractFromHere:(id)arg1 deviceFirstLevelMetric:(id)arg2 firstLevelKey:(id)arg3 secondLevelKey:(id)arg4 subKeyMap:(id)arg5 ;
-(void)addSubKeysThirdLevel:(id)arg0 extractFromHere:(id)arg1 deviceFirstLevelMetric:(id)arg2 firstLevelKey:(id)arg3 secondLevelKey:(id)arg4 thirdLevelKey:(id)arg5 subKeyMap:(id)arg6 ;
-(void)printAllMetricsToConsole;
-(void)pruneJSONData;
-(void)test;


@end


#endif