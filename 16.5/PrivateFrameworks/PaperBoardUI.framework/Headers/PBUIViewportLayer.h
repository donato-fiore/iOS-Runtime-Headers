// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIVIEWPORTLAYER_H
#define PBUIVIEWPORTLAYER_H

@class CALayer;



@interface PBUIViewportLayer : CALayer

@property (readonly, nonatomic) CALayer *contentLayer; // ivar: _contentLayer
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)animationForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(void)layoutSublayers;


@end


#endif