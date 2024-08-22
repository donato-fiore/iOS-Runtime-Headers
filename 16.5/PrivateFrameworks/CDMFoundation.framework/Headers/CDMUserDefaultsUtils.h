// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMUSERDEFAULTSUTILS_H
#define CDMUSERDEFAULTSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMUserDefaultsUtils : NSObject



+(BOOL)isAsrAlternativeConcurrent;
+(BOOL)isSkipNodeEnabled;
+(BOOL)isWriteDebugToDiskEnabled;
+(BOOL)prewarmModels;
+(NSUInteger)readNLv4MaxNumParses;
+(NSUInteger)readUaaPNLMaxNumParses;
+(NSUInteger)readUserDefaultsValueForKeyUint64:(id)arg0 defaultValue:(NSInteger)arg1 ;
+(id)getDefaultCustomAssetsRootPath;
+(id)getDefaultCustomLogPath;
+(id)readCustomAssetsRootPath;
+(id)readCustomLogPath;
+(id)readUaaPNLAppModelPaths;
+(id)readUaaPNLCoreModelPath;
+(id)readUaaPNLSystemConfigPath;
+(id)readUserDefaultLVCOverride;
+(id)readUserDefaultPscOverride;
+(id)readUserDefaultSnlcOverride;
+(unsigned int)readAsrAlternativeCount:(id)arg0 ;
+(unsigned int)readGraphRunnerMaxConcurrentCount;
+(unsigned int)readXPCCallbackDefaultTimeout;


@end


#endif