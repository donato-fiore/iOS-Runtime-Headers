// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWSELFHOSTWRAPPER_H
#define SBWINDOWSELFHOSTWRAPPER_H

@class UIView<UIScenePresentation>, UIScenePresentationContext, NSString, UIWindow;
@protocol UIScenePresenter;

#import <Foundation/Foundation.h>


@interface SBWindowSelfHostWrapper : NSObject

@property (readonly, nonatomic) UIView<UIScenePresentation> *hostView; // ivar: _hostView
@property (readonly, copy, nonatomic) UIScenePresentationContext *presentationContext;
@property (readonly, nonatomic) NSObject<UIScenePresenter> *presenter; // ivar: _presenter
@property (readonly, copy, nonatomic) NSString *requester;
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


+(id)wrapperForUseInWindow:(id)arg0 hostRequester:(id)arg1 sceneIdentifier:(id)arg2 ;
+(id)wrapperForWindow:(id)arg0 orientation:(NSInteger)arg1 hostRequester:(id)arg2 sceneIdentifier:(id)arg3 ;
-(void)modifyPresentationContext:(id)arg0 ;
-(void)stopHosting;


@end


#endif