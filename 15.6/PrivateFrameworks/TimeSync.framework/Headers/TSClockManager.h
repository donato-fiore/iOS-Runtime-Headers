// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCLOCKMANAGER_H
#define TSCLOCKMANAGER_H

@class IOKConnection, NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSClock.h"

@interface TSClockManager : NSObject {
    IOKConnection *_connection;
    NSMutableArray *_clockPersonalities;
    mach_timebase_info _timebaseInfo;
}


@property (readonly, nonatomic) TSClock *timeSyncClock; // ivar: _timeSyncClock
@property (readonly, nonatomic) NSUInteger timeSyncTimeClockIdentifier; // ivar: _timeSyncTimeClockIdentifier
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime; // ivar: _timeSyncTimeIsMachAbsoluteTime
@property (readonly, nonatomic) TSClock *translationClock; // ivar: _translationClock
@property (readonly, nonatomic) NSUInteger translationClockIdentifier; // ivar: _translationClockIdentifier


+(id)clockManager;
+(id)defaultClockPersonalities;
+(id)diagnosticDescriptionForClockService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForClockService:(id)arg0 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)sharedClockManager;
+(id)sharedClockManagerSyncWithTimeout:(NSUInteger)arg0 ;
+(id)timeSyncAudioClockDeviceUIDForClockIdentifier:(NSUInteger)arg0 ;
+(void)notifyWhenClockManagerIsAvailable:(id)arg0 ;
-(BOOL)addMappingFromClockID:(NSUInteger)arg0 toCoreAudioClockDomain:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)addTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)addgPTPServicesWithError:(*id)arg0 ;
-(BOOL)getTimeSyncTimeClockID:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)getTimeSyncTimeIsMachAbsolute:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)nextAvailableDynamicClockID:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)releaseDynamicClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeTSNCaptureServicesWithError:(*id)arg0 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removegPTPServicesWithError:(*id)arg0 ;
-(NSUInteger)addUserFilteredClockWithMachInterval:(NSUInteger)arg0 domainInterval:(NSUInteger)arg1 usingFilterShift:(unsigned char)arg2 isAdaptive:(BOOL)arg3 error:(*id)arg4 ;
-(NSUInteger)machAbsoluteNanosecondsToTicks:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteTicksToNanoseconds:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteToNanoseconds:(NSUInteger)arg0 ;
-(NSUInteger)nanosecondsToMachAbsolute:(NSUInteger)arg0 ;
-(id)availableClockIdentifiers;
-(id)clockWithClockIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(void)addClockPersonality:(id)arg0 ;
-(void)removeClockPersonality:(id)arg0 ;


@end


#endif