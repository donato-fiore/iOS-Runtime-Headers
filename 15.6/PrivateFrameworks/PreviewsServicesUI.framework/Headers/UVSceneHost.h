// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVSCENEHOST_H
#define UVSCENEHOST_H

@class UIView, NSString;
@protocol UIScenePresenter;


#import "UVInjectedScene.h"

@interface UVSceneHost : UIView {
    NSString *_hostIdentifier;
    id<UIScenePresenter> *_scenePresenter;
    BOOL _invalidated;
}


@property (readonly, weak, nonatomic) UVInjectedScene *injectedScene; // ivar: _injectedScene


+(id)createWithInjectedScene:(id)arg0 error:(*id)arg1 ;
-(id)_initWithHostIdentifier:(id)arg0 scenePresenter:(id)arg1 injectedScene:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif