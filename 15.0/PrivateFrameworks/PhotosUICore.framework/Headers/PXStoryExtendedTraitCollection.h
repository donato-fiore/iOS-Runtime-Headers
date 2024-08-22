// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYEXTENDEDTRAITCOLLECTION_H
#define PXSTORYEXTENDEDTRAITCOLLECTION_H

@class NSShadow;


#import "PXExtendedTraitCollection.h"

@interface PXStoryExtendedTraitCollection : PXExtendedTraitCollection {
    CGFloat _displayScale;
    CGSize _layoutReferenceSize;
}


@property (readonly, nonatomic) CGFloat viewportCornerRadius; // ivar: _viewportCornerRadius
@property (readonly, nonatomic) NSShadow *viewportShadow; // ivar: _viewportShadow


-(CGFloat)displayScale;
-(NSInteger)layoutOrientation;
-(id)initWithLayoutReferenceSize:(struct CGSize )arg0 ;
-(id)initWithLayoutReferenceSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 ;
-(struct CGSize )layoutReferenceSize;
-(void)performChanges:(id)arg0 ;
-(void)setDisplayScale:(CGFloat)arg0 ;
-(void)setLayoutReferenceSize:(struct CGSize )arg0 ;


@end


#endif