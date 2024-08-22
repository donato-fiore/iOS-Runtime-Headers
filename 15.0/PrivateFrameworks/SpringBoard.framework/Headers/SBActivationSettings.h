// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACTIVATIONSETTINGS_H
#define SBACTIVATIONSETTINGS_H

@class BSMutableSettings, NSString;
@protocol BSSettingDescriptionProvider, SBActivationSettings, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBActivationSettings : NSObject <BSSettingDescriptionProvider, SBActivationSettings, NSCopying, BSDescriptionProviding>

 {
    BSMutableSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_settingsAreValidToMoveContentToNewScene;
-(BOOL)boolForActivationSetting:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)flagForActivationSetting:(unsigned int)arg0 ;
-(id)copyActivationSettings;
-(id)copyActivationSettingsPassingFilter:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)objectForActivationSetting:(unsigned int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)applyActivationSettings:(id)arg0 ;
-(void)clearActivationSettings;
-(void)dealloc;
-(void)setFlag:(NSInteger)arg0 forActivationSetting:(unsigned int)arg1 ;
-(void)setObject:(id)arg0 forActivationSetting:(unsigned int)arg1 ;


@end


#endif