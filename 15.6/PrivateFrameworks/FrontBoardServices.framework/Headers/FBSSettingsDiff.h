// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSETTINGSDIFF_H
#define FBSSETTINGSDIFF_H

@class BSSettings, BSSettingsDiff, NSString;
@protocol BSXPCCoding, BSSettingDescriptionProvider;

#import <Foundation/Foundation.h>


@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider>

 {
    BSSettings *_changes;
    BSSettingsDiff *_otherSettingsDiff;
    Class _settingsClass;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithChanges:(id)arg0 otherSettingsDiff:(id)arg1 settingsClass:(Class)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithChanges:(id)arg0 fromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)evaluateWithInspector:(id)arg0 context:(*void)arg1 ;
-(void)inspectChangesWithBlock:(id)arg0 ;
-(void)inspectOtherChangesWithBlock:(id)arg0 ;


@end


#endif