// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFMODALSCENEDELEGATE_H
#define PBFMODALSCENEDELEGATE_H

@class UIResponder, NSMapTable, NSString, UIWindow;
@protocol UIWindowSceneDelegate;



@interface PBFModalSceneDelegate : UIResponder <UIWindowSceneDelegate>

 {
    NSMapTable *_sceneToWindowMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(id)init;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;


@end


#endif