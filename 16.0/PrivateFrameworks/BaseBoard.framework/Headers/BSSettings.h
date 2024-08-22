// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSETTINGS_H
#define BSSETTINGS_H

@class NSString;
@protocol NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding, BSSettingDescriptionProvider;

#import <Foundation/Foundation.h>

#import "BSMutableIntegerMap.h"

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, NSSecureCoding, BSDescriptionProviding>

 {
    BSMutableIntegerMap *_settingToFlagMap;
    BSMutableIntegerMap *_settingToObjectMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<BSSettingDescriptionProvider> *descriptionProvider; // ivar: _descriptionProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)boolForSetting:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKeyedSettings;
-(NSInteger)flagForSetting:(NSUInteger)arg0 ;
-(id)_init;
-(id)_keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)_valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 multilinePrefix:(id)arg3 ;
-(id)allSettings;
-(id)basicDescriptionWithPrefix:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForSetting:(NSUInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_removeAllSettings;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)enumerateFlagsWithBlock:(id)arg0 ;
-(void)enumerateObjectsWithBlock:(id)arg0 ;


@end


#endif