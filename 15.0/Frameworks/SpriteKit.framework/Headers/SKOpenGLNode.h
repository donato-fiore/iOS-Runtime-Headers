// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKOPENGLNODE_H
#define SKOPENGLNODE_H



#import "SKNode.h"

@interface SKOpenGLNode : SKNode

@property CGSize viewportSize;


+(id)openGLNodeWithViewportSize:(struct CGSize )arg0 ;
-(BOOL)needsRenderForTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewportSize:(struct CGSize )arg0 ;
-(void)_renderForTime:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)renderForTime:(CGFloat)arg0 ;


@end


#endif