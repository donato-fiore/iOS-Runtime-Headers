// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KISSNODE_H
#define KISSNODE_H

@class UIColor, SKSpriteNode, SKShader;

#import <Foundation/Foundation.h>


@interface KissNode : NSObject

@property (nonatomic) NSInteger blendMode; // ivar: _blendMode
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGFloat colorBlendFactor; // ivar: _colorBlendFactor
@property (nonatomic) BOOL leavesMark; // ivar: _leavesMark
@property (retain, nonatomic) SKSpriteNode *node; // ivar: _node
@property (nonatomic) CGPoint position; // ivar: _position
@property (retain, nonatomic) SKShader *shader; // ivar: _shader
@property (nonatomic) CGFloat zRotation; // ivar: _zRotation


+(id)kissNodeWithColor:(id)arg0 size:(struct CGSize )arg1 ;
-(void)removeFromParent;
-(void)runAction:(id)arg0 ;
-(void)setScale:(CGFloat)arg0 ;


@end


#endif