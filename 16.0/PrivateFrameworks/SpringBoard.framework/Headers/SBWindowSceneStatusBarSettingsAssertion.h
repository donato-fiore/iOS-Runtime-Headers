// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWSCENESTATUSBARSETTINGSASSERTION_H
#define SBWINDOWSCENESTATUSBARSETTINGSASSERTION_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, SBWindowSceneStatusBarAssertion;

#import <Foundation/Foundation.h>

#import "SBWindowSceneStatusBarAssertionManager.h"
#import "SBStatusBarSettings.h"

@interface SBWindowSceneStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, SBWindowSceneStatusBarAssertion>



@property (readonly, weak, nonatomic) SBWindowSceneStatusBarAssertionManager *assertionManager; // ivar: _assertionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) SBStatusBarSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)_initWithWindowSceneStatusBarAssertionManager:(id)arg0 settings:(id)arg1 atLevel:(NSUInteger)arg2 reason:(id)arg3 ;
-(id)_initWithWindowSceneStatusBarAssertionManager:(id)arg0 statusBarHidden:(BOOL)arg1 atLevel:(NSUInteger)arg2 reason:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)acquire;
-(void)acquireWithAnimationParameters:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithAnimationParameters:(id)arg0 ;
-(void)modifySettingsWithBlock:(id)arg0 ;
// -(void)modifySettingsWithBlock:(id)arg0 animationParameters:(unk)arg1  ;


@end


#endif