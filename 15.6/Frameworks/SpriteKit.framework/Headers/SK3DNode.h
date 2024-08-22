// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SK3DNODE_H
#define SK3DNODE_H

@class SCNNode, SCNScene;


#import "SKNode.h"

@interface SK3DNode : SKNode {
    *void _skc3DNode;
}


@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic) BOOL loops;
@property (getter=isPlaying) BOOL playing;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) CGFloat sceneTime;
@property (retain, nonatomic) SCNScene *scnScene;
@property CGSize viewportSize;


+(BOOL)supportsSecureCoding;
+(id)nodeWithViewportSize:(struct CGSize )arg0 ;
-(*void)_makeBackingNode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 options:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewportSize:(struct CGSize )arg0 ;
-(id)projectPoint;
-(id)unprojectPoint;
-(void)_didMakeBackingNode;
-(void)_renderForTime:(CGFloat)arg0 ;
-(void)_scnSceneDidUpdate:(id)arg0 ;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif