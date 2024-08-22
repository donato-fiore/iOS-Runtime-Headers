// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIINCALLSCENETRANSITIONCONTEXT_H
#define SBSUIINCALLSCENETRANSITIONCONTEXT_H

@class UIApplicationSceneTransitionContext, NSString;



@interface SBSUIInCallSceneTransitionContext : UIApplicationSceneTransitionContext

@property (copy, nonatomic) NSString *analyticsSource;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif