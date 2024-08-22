// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAUTONOMOUSSINGLEAPPMODECONFIGURATION_H
#define UIAUTONOMOUSSINGLEAPPMODECONFIGURATION_H

@class NSMutableDictionary, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying>

 {
    NSMutableDictionary *_propertiesAsDictionary;
}


@property (nonatomic) BOOL allowsAutoLock;
@property (nonatomic) BOOL allowsLockButton;
@property (nonatomic) BOOL automaticallyRelaunchesAfterAppCrash;
@property (retain, nonatomic) NSDictionary *managedConfigurationSettings; // ivar: _managedConfigurationSettings
@property (readonly, nonatomic) NSDictionary *propertiesAsDictionary;
@property (nonatomic) NSUInteger style; // ivar: _style


+(id)defaultConfiguration;
+(id)defaultConfigurationForStyle:(NSUInteger)arg0 ;
-(BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg0 ;
-(BOOL)_boolValueForFeatureKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setBoolValue:(BOOL)arg0 forFeatureKey:(id)arg1 ;


@end


#endif