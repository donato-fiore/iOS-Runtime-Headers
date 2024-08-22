// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTENTRYKEY_H
#define PPTENTRYKEY_H


#import <Foundation/Foundation.h>


@interface PPTEntryKey : NSObject



+(BOOL)pptEnabled:(id)arg0 ;
+(NSInteger)timeToLiveForEntryKey:(id)arg0 ;
+(id)allEntryKeys;
+(id)allEntryKeysForStorage:(int)arg0 ;
+(id)allKeysForEntryKey:(id)arg0 ;
+(id)categoryForEntryKey:(id)arg0 ;
+(id)entryKeyForMetric:(id)arg0 ;
+(id)entryKeyFromSelector:(id)arg0 ;
+(id)entrySelectorForMetric:(id)arg0 ;
+(id)metricsForEntryKey:(id)arg0 ;
+(id)subsystemForEntryKey:(id)arg0 ;
+(id)versionHashForEntryKey:(id)arg0 ;
+(int)storageForEntryKey:(id)arg0 ;
+(void)setupEntryKeyForMetric:(id)arg0 ;


@end


#endif