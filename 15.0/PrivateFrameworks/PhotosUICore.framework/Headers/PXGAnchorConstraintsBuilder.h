// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGANCHORCONSTRAINTSBUILDER_H
#define PXGANCHORCONSTRAINTSBUILDER_H

@class NSMutableArray, NSArray;
@protocol PXGAnchorConstraints;

#import <Foundation/Foundation.h>


@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints>

 {
    NSMutableArray *_constraints;
}


@property (readonly, copy, nonatomic) NSArray *constraints;


-(id)init;
-(void)_keepEdge:(unsigned int)arg0 ofSpriteWithReference:(id)arg1 referencingOptions:(NSUInteger)arg2 inequality:(NSInteger)arg3 visibleEdge:(unsigned int)arg4 offset:(CGFloat)arg5 ;
-(void)keepEdge:(unsigned int)arg0 ofSpriteWithReference:(id)arg1 referencingOptions:(NSUInteger)arg2 greaterThanOrEqualToVisibleEdge:(unsigned int)arg3 offset:(CGFloat)arg4 ;
-(void)keepEdge:(unsigned int)arg0 ofSpriteWithReference:(id)arg1 referencingOptions:(NSUInteger)arg2 lessThanOrEqualToVisibleEdge:(unsigned int)arg3 offset:(CGFloat)arg4 ;
-(void)keepSpriteWithReference:(id)arg0 referencingOptions:(NSUInteger)arg1 visuallyStableForAttribute:(NSInteger)arg2 ;
-(void)keepVisiblePortionOfSpriteWithReference:(id)arg0 referencingOptions:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 visuallyStableForAttribute:(NSInteger)arg3 ;


@end


#endif