// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOVERLAYUISCENECONTROLLER_H
#define SBOVERLAYUISCENECONTROLLER_H



#import "SBSystemUISceneController.h"
#import "SBSingleSceneController.h"

@interface SBOverlayUISceneController : SBSystemUISceneController {
    SBSingleSceneController *_subterraneanScene;
}




+(id)_setupInfo;
-(id)_subterraneanSceneIdentifierForWindowScene:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif