// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENEHOSTVIEW_H
#define _EXSCENEHOSTVIEW_H

@class UIView, _EXExtensionProcessHandle, NSString, FBScene, NSUUID;
@protocol UIScenePresenter;



@interface _EXSceneHostView : UIView

@property (retain, nonatomic) _EXExtensionProcessHandle *extensionProcess; // ivar: _extensionProcess
@property (readonly, nonatomic) NSString *role; // ivar: _role
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


-(id)initWithExtensionProcess:(id)arg0 sessionUUID:(id)arg1 role:(id)arg2 ;
-(void)creatScene;
-(void)layoutSubviews;


@end


#endif