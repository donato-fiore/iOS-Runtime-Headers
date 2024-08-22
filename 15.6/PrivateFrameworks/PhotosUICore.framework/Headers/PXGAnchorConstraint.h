// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGANCHORCONSTRAINT_H
#define PXGANCHORCONSTRAINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXGSpriteReference.h"

@interface PXGAnchorConstraint : NSObject <NSCopying>



@property (nonatomic) NSInteger inequality; // ivar: _inequality
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSUInteger referencingOptions; // ivar: _referencingOptions
@property (nonatomic) NSInteger spriteAttribute; // ivar: _spriteAttribute
@property (nonatomic) unsigned int spriteEdge; // ivar: _spriteEdge
@property (retain, nonatomic) PXGSpriteReference *spriteReference; // ivar: _spriteReference
@property (nonatomic) BOOL visiblePortionOnly; // ivar: _visiblePortionOnly
@property (nonatomic) unsigned int visibleRectEdge; // ivar: _visibleRectEdge


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif