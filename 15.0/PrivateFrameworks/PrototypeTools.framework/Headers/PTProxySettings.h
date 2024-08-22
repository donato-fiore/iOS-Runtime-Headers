// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTPROXYSETTINGS_H
#define PTPROXYSETTINGS_H

@class NSMutableDictionary;


#import "PTSettings.h"
#import "PTProxySettingsDefinition.h"

@interface PTProxySettings : PTSettings {
    NSMutableDictionary *_values;
}


@property (readonly, nonatomic) PTProxySettingsDefinition *definition; // ivar: _definition


+(id)new;
+(id)proxyWithDefinition:(id)arg0 ;
+(id)settingsFromArchiveDictionary:(id)arg0 ;
+(id)settingsOrProxyWithDefinition:(id)arg0 ;
-(id)_createChildForKey:(id)arg0 ;
-(id)_initWithDefinition:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDefaultValues;
-(id)module;
-(id)valueForKey:(id)arg0 ;
-(void)restoreDefaultValues;
-(void)restoreFromArchiveDictionary:(id)arg0 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif