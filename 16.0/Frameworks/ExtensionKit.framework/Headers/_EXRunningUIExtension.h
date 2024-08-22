// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXRUNNINGUIEXTENSION_H
#define _EXRUNNINGUIEXTENSION_H

@class EXRunningExtension;
@protocol _EXExtensionSceneFactory;



@interface _EXRunningUIExtension : EXRunningExtension

@property (retain, nonatomic) NSObject<_EXExtensionSceneFactory> *sceneFactory; // ivar: _sceneFactory


+(id)sharedInstance;
-(BOOL)isExtensionViewServiceSessionManager:(id)arg0 ;
-(BOOL)requiresExtensionContextForViewServiceSessionManager:(id)arg0 ;
-(id)containingViewControllerClassNameForViewServiceSessionManager:(id)arg0 ;
-(id)mainStoryboardNameForViewServiceSessionManager:(id)arg0 ;
-(id)viewControllerClassNameForViewServiceSessionManager:(id)arg0 ;
-(void)checkIn;
-(void)installRunloopObserverToPingLaunchdAfterEvent;
-(void)viewServiceSessionManager:(id)arg0 didCreateViewController:(id)arg1 contextToken:(id)arg2 ;


@end


#endif