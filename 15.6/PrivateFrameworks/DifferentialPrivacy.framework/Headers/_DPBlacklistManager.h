// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBLACKLISTMANAGER_H
#define _DPBLACKLISTMANAGER_H

@protocol _DPMaintenance;

#import <Foundation/Foundation.h>


@interface _DPBlacklistManager : NSObject <_DPMaintenance>





+(BOOL)createRuntimeBlacklistDirectory:(id)arg0 ;
+(BOOL)removeAllFilesFromDirectory:(id)arg0 ;
+(BOOL)removeBlacklistFileWithKey:(id)arg0 fromDirectory:(id)arg1 ;
+(BOOL)saveBlacklist:(id)arg0 forKey:(id)arg1 runtimeDirectory:(id)arg2 ;
+(BOOL)saveBlacklist:(id)arg0 knownVersionByKey:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 ;
+(BOOL)saveBlacklist:(id)arg0 systemDirectory:(id)arg1 runtimeDirectory:(id)arg2 memoryLimit:(NSUInteger)arg3 ;
+(BOOL)validateBlacklist:(id)arg0 ;
+(NSUInteger)memoryRequiredBySystemBlacklistInDirectory:(id)arg0 runtimeBlacklistInDirectory:(id)arg1 blacklist:(id)arg2 ;
+(NSUInteger)memorySizeWithDirectory:(id)arg0 ;
+(id)keepLatestRuntimeBlacklistInDirectory:(id)arg0 compareToSystemBlacklistInDirectory:(id)arg1 ;
+(void)processRuntimeBlacklist;
+(void)processRuntimeBlacklist:(id)arg0 systemDirectory:(id)arg1 runtimeDirectory:(id)arg2 blacklistLengthLimit:(NSUInteger)arg3 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif