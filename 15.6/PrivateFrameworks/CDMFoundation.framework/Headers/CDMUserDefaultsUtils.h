// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMUSERDEFAULTSUTILS_H
#define CDMUSERDEFAULTSUTILS_H


#import <Foundation/Foundation.h>


@interface CDMUserDefaultsUtils : NSObject



+(BOOL)isAsrAlternativeConcurrent;
+(NSUInteger)readNLv4MaxNumParses;
+(NSUInteger)readUaaPNLMaxNumParses;
+(NSUInteger)readUserDefaultsValueForKeyUint64:(id)arg0 defaultValue:(NSInteger)arg1 ;
+(id)getDefaultCustomAssetsRootPath;
+(id)getDefaultCustomLogPath;
+(id)readCurrentActiveGraph;
+(id)readCustomAssetsRootPath;
+(id)readCustomLogPath;
+(id)readUaaPNLAppModelPaths;
+(id)readUaaPNLCoreModelPath;
+(id)readUaaPNLSystemConfigPath;
+(id)readUserDefaultPscOverride;
+(id)readUserDefaultSnlcOverride;
+(unsigned int)readAsrAlternativeCount:(id)arg0 ;
+(unsigned int)readGraphRunnerMaxConcurrentCount;
+(void)setCurrentActiveGraph:(id)arg0 ;
+(void)setCustomAssetsRootPath:(id)arg0 ;


@end


#endif