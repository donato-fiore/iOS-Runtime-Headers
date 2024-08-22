// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSCENEUPDATECONTEXT_H
#define FBSCENEUPDATECONTEXT_H

@class NSString, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext;
@protocol BSDescriptionProviding, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding>

 {
    BOOL _lifecycleExternallyManaged;
}


@property (copy, nonatomic) NSObject<NSObject><NSCopying> *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly, nonatomic) FBSSceneSettingsDiff *settingsDiff; // ivar: _settingsDiff
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger transactionID; // ivar: _transactionID
@property (readonly, weak, nonatomic) FBSSceneTransitionContext *transitionContext; // ivar: _transitionContext


+(id)contextWithSceneID:(id)arg0 transactionID:(NSUInteger)arg1 settings:(id)arg2 settingsDiff:(id)arg3 transitionContext:(id)arg4 ;
-(BOOL)isClientLifecycleExternallyManaged;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif