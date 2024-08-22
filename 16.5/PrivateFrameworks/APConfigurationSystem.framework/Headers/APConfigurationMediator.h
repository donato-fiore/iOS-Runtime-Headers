// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATIONMEDIATOR_H
#define APCONFIGURATIONMEDIATOR_H


#import <Foundation/Foundation.h>


@interface APConfigurationMediator : NSObject



+(id)_configSystemErrorWithDescription:(id)arg0 ;
+(id)_loadFromDefaultsForClass:(Class)arg0 error:(*id)arg1 ;
+(id)_loadFromJSONForClass:(Class)arg0 error:(*id)arg1 ;
+(id)_loadFromPathForClass:(Class)arg0 error:(*id)arg1 ;
+(id)configSystemDirectoryPath;
+(id)configurationForClass:(Class)arg0 ;
+(void)_createPlistFile:(id)arg0 atPath:(id)arg1 ;
+(void)_removeFileAtPath:(id)arg0 ;


@end


#endif