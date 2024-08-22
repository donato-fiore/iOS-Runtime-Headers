// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLIENTRENDERERWINDOW_H
#define _CLIENTRENDERERWINDOW_H

@class UIWindow;



@interface _ClientRendererWindow : UIWindow



+(BOOL)_isSecure;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_shouldUseRemoteContext;
-(BOOL)_wantsSceneAssociation;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForViewTransform;
-(id)init;


@end


#endif