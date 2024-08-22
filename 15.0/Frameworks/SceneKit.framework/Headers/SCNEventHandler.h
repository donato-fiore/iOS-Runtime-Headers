// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNEVENTHANDLER_H
#define SCNEVENTHANDLER_H


#import <Foundation/Foundation.h>

#import "SCNView.h"
#import "SCNNode.h"

@interface SCNEventHandler : NSObject {
    SCNView *_view;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}


@property BOOL autoSwitchToFreeCamera;
@property BOOL enableFreeCamera;
@property (readonly) SCNNode *freeCamera;
@property (readonly) SCNView *view;


-(BOOL)wantsRedraw;
-(id)gestureRecognizers;
-(id)init;
-(void)activateFreeCamera;
-(void)cameraDidChange;
-(void)cameraWillChange;
-(void)dealloc;
-(void)sceneDidChange;
-(void)sceneWillChange;
-(void)setDelegate:(id)arg0 ;
-(void)viewDidDrawAtTime:(CGFloat)arg0 ;
-(void)viewWillDrawAtTime:(CGFloat)arg0 ;


@end


#endif