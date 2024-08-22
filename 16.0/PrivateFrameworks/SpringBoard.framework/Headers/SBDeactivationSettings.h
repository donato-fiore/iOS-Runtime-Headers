// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEACTIVATIONSETTINGS_H
#define SBDEACTIVATIONSETTINGS_H

@class BSMutableSettings, NSString;
@protocol BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding>

 {
    BSMutableSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)boolForDeactivationSetting:(unsigned int)arg0 ;
-(NSInteger)flagForDeactivationSetting:(unsigned int)arg0 ;
-(id)copyDeactivationSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)objectForDeactivationSetting:(unsigned int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)applyDeactivationSettings:(id)arg0 ;
-(void)clearDeactivationSettings;
-(void)dealloc;
-(void)setFlag:(NSInteger)arg0 forDeactivationSetting:(unsigned int)arg1 ;
-(void)setObject:(id)arg0 forDeactivationSetting:(unsigned int)arg1 ;


@end


#endif