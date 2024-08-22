// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKBUTTONNODESPRITE_H
#define SKBUTTONNODESPRITE_H

@protocol SKButtonNodeSpriteDelegate;


#import "SKSpriteNode.h"
#import "SKAction.h"

@interface SKButtonNodeSprite : SKSpriteNode {
    id *_downBlock;
    id *_upBlock;
    id *_upInsideBlock;
    int _touches;
}


@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SKAction *downAction; // ivar: _downAction
@property (retain, nonatomic) SKAction *upAction; // ivar: _upAction


+(BOOL)supportsSecureCoding;
+(id)buttonWithFontNamed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)onTouchDownInside:(id)arg0 ;
-(void)onTouchUp:(id)arg0 ;
-(void)onTouchUpInside:(id)arg0 ;
-(void)touchBegan:(NSUInteger)arg0 location:(struct CGPoint )arg1 ;
-(void)touchEnded:(NSUInteger)arg0 location:(struct CGPoint )arg1 ;
-(void)touchMoved:(NSUInteger)arg0 location:(struct CGPoint )arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif