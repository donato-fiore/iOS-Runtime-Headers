// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDRENDERABLE_H
#define TSDRENDERABLE_H

@class NSString, CALayer, NSArray;
@protocol TSDContentsScaleProviding, CALayerDelegate;

#import <Foundation/Foundation.h>

#import "TSDRenderable.h"

@interface TSDRenderable : NSObject <TSDContentsScaleProviding>



@property (nonatomic) CGAffineTransform affineTransform;
@property (nonatomic) BOOL allowsGroupOpacity;
@property (nonatomic) CGPoint anchorPoint;
@property (nonatomic) *CGColor backgroundColor;
@property (nonatomic) *CGColor borderColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGRect bounds;
@property (retain, nonatomic) id *contents;
@property (copy, nonatomic) NSString *contentsGravity;
@property (nonatomic) CGRect contentsRect;
@property (nonatomic) CGFloat contentsScale;
@property (nonatomic) CGFloat cornerRadius;
@property (weak, nonatomic) NSObject<CALayerDelegate> *delegate;
@property (nonatomic) unsigned int edgeAntialiasingMask;
@property (nonatomic) CGRect frame;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (copy, nonatomic) NSString *magnificationFilter;
@property (retain, nonatomic) CALayer *mask;
@property (nonatomic) BOOL masksToBounds;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) float opacity;
@property (nonatomic) CGPoint position;
@property (readonly, nonatomic) CGSize preferredFrameSize;
@property (readonly, nonatomic) TSDRenderable *presentationRenderable;
@property (nonatomic) CGFloat rasterizationScale;
@property (nonatomic) *CGColor shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) *CGPath shadowPath;
@property (nonatomic) CGFloat shadowRadius;
@property (nonatomic) BOOL shouldRasterize;
@property (copy, nonatomic) NSArray *sublayers;
@property (copy, nonatomic) NSArray *subrenderables;
@property (readonly) CALayer *superlayer;
@property (readonly, nonatomic) BOOL tsd_tilingSafeHasContents;
@property (nonatomic) CGFloat zPosition;


+(id)renderable;
+(id)renderableFromLayer:(id)arg0 ;
+(id)renderablesFromLayers:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)animationForKey:(id)arg0 ;
-(id)description;
-(id)initWithCALayer:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromLayer:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toLayer:(id)arg1 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addSublayer:(id)arg0 ;
-(void)addSubrenderable:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)setIfDifferentFrame:(struct CGRect )arg0 orTransform:(struct CGAffineTransform )arg1 ;
-(void)setNeedsDisplay;


@end


#endif