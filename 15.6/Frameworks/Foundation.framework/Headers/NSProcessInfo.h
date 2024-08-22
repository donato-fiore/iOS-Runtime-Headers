// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPROCESSINFO_H
#define NSPROCESSINFO_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSProcessInfo : NSObject {
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    NSInteger automaticTerminationOptOutCounter;
}


@property (readonly) NSUInteger activeProcessorCount;
@property (readonly, copy) NSArray *arguments;
@property BOOL automaticTerminationSupportEnabled;
@property (readonly, copy) NSDictionary *environment;
@property (readonly, copy) NSString *fullUserName;
@property (readonly, copy) NSString *globallyUniqueString;
@property (readonly, copy) NSString *hostName;
@property (readonly, getter=isiOSAppOnMac) BOOL iOSAppOnMac;
@property (readonly, getter=isMacCatalystApp) BOOL macCatalystApp;
@property (readonly) ? operatingSystemVersion;
@property (readonly, copy) NSString *operatingSystemVersionString;
@property (readonly) NSUInteger physicalMemory;
@property (readonly) int processIdentifier;
@property (copy) NSString *processName;
@property (readonly) NSUInteger processorCount;
@property (readonly) CGFloat systemUptime;
@property (readonly, copy) NSString *userName;


+(id)processInfo;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isOperatingSystemAtLeastVersion:(struct ? )arg0 ;
-(BOOL)isTranslated;
-(BOOL)macCatalystVersionIsAtLeastVersion:(struct ? )arg0 ;
-(NSInteger)_suddenTerminationDisablingCount;
-(NSInteger)thermalState;
-(NSUInteger)operatingSystem;
-(id)beginActivityWithOptions:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)beginSuspensionOfSystemBehaviors:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)operatingSystemName;
-(id)userHomeDirectory;
-(struct ? )macCatalystVersion;
-(void)_disableAutomaticTerminationOnly:(id)arg0 ;
-(void)_enableAutomaticTerminationOnly:(id)arg0 ;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg0 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg0 ;
-(void)_reactivateActivity:(id)arg0 ;
-(void)dealloc;
-(void)disableAutomaticTermination:(id)arg0 ;
-(void)disableSuddenTermination;
-(void)enableAutomaticTermination:(id)arg0 ;
-(void)enableSuddenTermination;
-(void)endActivity:(id)arg0 ;
-(void)endSystemBehaviorSuspension:(id)arg0 ;
-(void)performActivityWithOptions:(NSUInteger)arg0 reason:(id)arg1 block:(id)arg2 ;
-(void)performActivityWithOptions:(NSUInteger)arg0 reason:(id)arg1 usingBlock:(id)arg2 ;
-(void)performExpiringActivityWithReason:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif