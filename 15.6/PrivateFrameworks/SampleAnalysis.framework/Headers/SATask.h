// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATASK_H
#define SATASK_H

@class NSString, NSMutableSet, NSArray, NSDictionary;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SABinary.h"
#import "SATimestamp.h"
#import "SASharedCache.h"
#import "SAThread.h"
#import "SABinaryLoadInfo.h"

@interface SATask : NSObject <SASerializable>

 {
    NSString *_mainBinaryPath;
    SABinary *_mainBinary;
    NSString *_name;
    BOOL _alreadyAttemptedToGetLoadInfoFromLiveProcess;
    BOOL _isBeta;
    BOOL _alreadyGatheredDataFromLiveProcess;
    BOOL _hasNoSharedCache;
    BOOL _assumeBinaryLoadInfosContainsMainBinary;
    int _pid;
    int _ppid;
    int _rpid;
    NSString *_bundleName;
    NSString *_bundleBuildVersion;
    NSString *_bundleProjectName;
    NSString *_bundleSourceVersion;
    NSString *_bundleProductBuildVersion;
    NSString *_commerceAppID;
    NSString *_commerceExternalID;
    NSUInteger _adamID;
    NSString *_vendorID;
    NSString *_appType;
    NSString *_cohortID;
    SATimestamp *_execTimestamp;
    SATimestamp *_exitTimestamp;
    SASharedCache *_sharedCache;
    SAThread *_mainThread;
    SATimestamp *_pidStartTimestamp;
    NSMutableSet *_rootFrames;
    _CSArchitecture _architecture;
}


@property (readonly) NSUInteger adamID;
@property (readonly) BOOL allowsIdleExit; // ivar: _allowsIdleExit
@property (readonly) NSString *appType;
@property (readonly) NSArray *binaryLoadInfos; // ivar: _binaryLoadInfos
@property (readonly) NSString *bundleBuildVersion;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleName;
@property (readonly) NSString *bundleProductBuildVersion;
@property (readonly) NSString *bundleProjectName;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *bundleSourceVersion;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *codesigningID;
@property (readonly) NSString *cohortID;
@property (readonly) NSString *commerceAppID;
@property (readonly) NSString *commerceExternalID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dispatchQueues; // ivar: _dispatchQueues
@property (readonly) SATimestamp *execTimestamp;
@property (readonly) SATimestamp *exitTimestamp;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isBeta;
@property (readonly) BOOL isTranslocated; // ivar: _isTranslocated
@property (readonly) BOOL isUnresponsive; // ivar: _isUnresponsive
@property (readonly) SABinary *mainBinary;
@property (readonly) SABinaryLoadInfo *mainBinaryLoadInfo;
@property (copy) NSString *mainBinaryPath;
@property (readonly) SAThread *mainThread;
@property (readonly, copy) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) SASharedCache *sharedCache;
@property (readonly) Class superclass;
@property (readonly) NSArray *taskStates; // ivar: _taskStates
@property (readonly) NSString *teamID;
@property (readonly) NSDictionary *threads; // ivar: _threads
@property (readonly) CGFloat timeOfLastResponse; // ivar: _timeOfLastResponse
@property (readonly) unsigned int uid; // ivar: _uid
@property (readonly) NSUInteger uniquePid; // ivar: _uniquePid
@property (readonly) BOOL usesSuddenTermination; // ivar: _usesSuddenTermination
@property (readonly) NSString *vendorID;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfFirstTaskStateOnOrAfterTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(NSUInteger)indexOfLastTaskStateOnOrBeforeTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(NSUInteger)sampleCountInTimestampRangeStart:(id)arg0 end:(id)arg1 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)architectureString;
-(id)endTimestamp;
-(id)firstTaskStateOnOrAfterTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(id)initWithKCDataDeltaTask:(struct task_delta_snapshot_v2 *)arg0 loadInfos:(struct dyld_uuid_info_64 *)arg1 numLoadInfos:(unsigned int)arg2 textExecLoadInfos:(struct dyld_uuid_info_64 *)arg3 numTextExecLoadInfos:(unsigned int)arg4 pid:(int)arg5 sharedCache:(id)arg6 ;
-(id)initWithKCDataTask:(struct task_snapshot_v2 *)arg0 loadInfos:(struct dyld_uuid_info_64 *)arg1 numLoadInfos:(unsigned int)arg2 textExecLoadInfos:(struct dyld_uuid_info_64 *)arg3 numTextExecLoadInfos:(unsigned int)arg4 architecture:(struct _CSArchitecture )arg5 sharedCache:(id)arg6 ;
-(id)initWithPid:(int)arg0 andUniquePid:(NSUInteger)arg1 andName:(id)arg2 sharedCache:(id)arg3 ;
-(id)initWithStackshotTaskV1:(struct task_snapshot *)arg0 loadInfos:(struct dyld_uuid_info_64 *)arg1 numLoadInfos:(unsigned int)arg2 sharedCache:(id)arg3 ;
-(id)lastTaskStateOnOrBeforeTime:(id)arg0 withSampleIndex:(BOOL)arg1 ;
-(id)startTimestamp;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)cpuTimeNs:(*NSUInteger)arg0 cpuInstructions:(*NSUInteger)arg1 cpuCycles:(*NSUInteger)arg2 betweenStartTime:(id)arg3 endTime:(id)arg4 ;
-(void)dealloc;
-(void)enumerateTaskStatesBetweenStartTime:(id)arg0 endTime:(id)arg1 reverseOrder:(BOOL)arg2 withSampleIndex:(BOOL)arg3 block:(id)arg4 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif