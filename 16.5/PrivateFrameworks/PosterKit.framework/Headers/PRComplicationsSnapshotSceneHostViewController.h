// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONSSNAPSHOTSCENEHOSTVIEWCONTROLLER_H
#define PRCOMPLICATIONSSNAPSHOTSCENEHOSTVIEWCONTROLLER_H

@class UIViewController, FBScene;
@protocol UIScenePresenter;



@interface PRComplicationsSnapshotSceneHostViewController : UIViewController {
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
}




-(id)initWithScene:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;


@end


#endif