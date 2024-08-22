// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGREMOTECONFIGURATION_H
#define PGREMOTECONFIGURATION_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PGRemoteConfiguration : NSObject {
    NSMutableDictionary *_remoteConfigurationCache;
    NSArray *_configurationSources;
}




-(BOOL)_isValidFilePath:(id)arg0 ;
-(BOOL)boolValueForKey:(id)arg0 withFallbackValue:(BOOL)arg1 ;
-(CGFloat)doubleValueForKey:(id)arg0 withFallbackValue:(CGFloat)arg1 ;
-(NSInteger)longValueForKey:(id)arg0 withFallbackValue:(NSInteger)arg1 ;
-(id)_configValueForKey:(id)arg0 withFallbackValue:(id)arg1 ;
-(id)arrayValueForKey:(id)arg0 withFallbackValue:(id)arg1 ;
-(id)dictionaryValueForKey:(id)arg0 withFallbackValue:(id)arg1 ;
-(id)fileValueForKey:(id)arg0 withFallbackValue:(id)arg1 ;
-(id)init;
-(id)initWithConfigurationSources:(id)arg0 ;
-(id)initWithTrialNamespace:(unsigned short)arg0 onDiskResourceFile:(id)arg1 ;
-(id)onDiskConfigurationPathForResourceFileName:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 withFallbackValue:(id)arg1 ;
-(void)_cacheFallbackValueForKey:(id)arg0 withValue:(id)arg1 ;


@end


#endif