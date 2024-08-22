// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNRENDERERTRANSITIONCONTEXT_H
#define SCNRENDERERTRANSITIONCONTEXT_H

@class SKTransition;

#import <Foundation/Foundation.h>

#import "SCNNode.h"
#import "SCNScene.h"

@interface SCNRendererTransitionContext : NSObject {
    id *completionHandler;
    ? _transitionPass;
    SCNOffscreenRenderer" _renderers;
}


@property (retain, nonatomic) SCNNode *outgoingPointOfView; // ivar: _outgoingPointOfView
@property (retain, nonatomic) SCNScene *outgoingScene; // ivar: _outgoingScene
@property (retain, nonatomic) SKTransition *transition; // ivar: _transition
@property (nonatomic) CGFloat transitionStartTime; // ivar: _transitionStartTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)prepareRendererAtIndex:(int)arg0 withScene:(id)arg1 renderSize:(struct CGSize )arg2 pointOfView:(id)arg3 parentRenderer:(id)arg4 ;
-(void)dealloc;


@end


#endif