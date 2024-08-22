// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSETTINGSDIFFINSPECTOR_H
#define FBSSETTINGSDIFFINSPECTOR_H

@class BSMutableSettings;

#import <Foundation/Foundation.h>


@interface FBSSettingsDiffInspector : NSObject {
    BSMutableSettings *_observerInfo;
    BSMutableSettings *_otherSettingsObserverInfo;
    BOOL _iteratingObservers;
}




-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addObserver:(id)arg0 forSetting:(NSUInteger)arg1 inInfo:(id)arg2 ;
-(void)_observeSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)inspectDiff:(id)arg0 withContext:(*void)arg1 ;
-(void)observeOtherSetting:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)removeAllObservers;


@end


#endif