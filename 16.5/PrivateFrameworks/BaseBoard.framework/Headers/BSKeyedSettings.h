// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSKEYEDSETTINGS_H
#define BSKEYEDSETTINGS_H

@class NSMutableDictionary;


#import "BSSettings.h"

@interface BSKeyedSettings : BSSettings {
    NSMutableDictionary *_keyMap;
}




-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)isKeyedSettings;
-(NSInteger)flagForKey:(id)arg0 ;
-(id)_init;
-(id)_keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)_valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 multilinePrefix:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)_removeAllSettings;
-(void)enumerateKeyedFlagsWithBlock:(id)arg0 ;
-(void)enumerateKeyedObjectsWithBlock:(id)arg0 ;


@end


#endif