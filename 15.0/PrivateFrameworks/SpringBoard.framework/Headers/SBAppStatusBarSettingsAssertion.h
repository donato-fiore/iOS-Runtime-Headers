// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSTATUSBARSETTINGSASSERTION_H
#define SBAPPSTATUSBARSETTINGSASSERTION_H

@class NSString, NSDate;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBAppStatusBarSettings.h"

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) SBAppStatusBarSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 atLevel:(NSUInteger)arg1 reason:(id)arg2 ;
-(id)initWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 reason:(id)arg2 ;
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