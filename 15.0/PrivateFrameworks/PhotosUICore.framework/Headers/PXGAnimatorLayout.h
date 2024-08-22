// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGANIMATORLAYOUT_H
#define PXGANIMATORLAYOUT_H


#import <Foundation/Foundation.h>

#import "PXGAnimator.h"
#import "PXGLayout.h"

@interface PXGAnimatorLayout : NSObject

@property (readonly, weak, nonatomic) PXGAnimator *animator; // ivar: _animator
@property (nonatomic) PXGCameraConfiguration cameraConfiguration; // ivar: _cameraConfiguration
@property (retain, nonatomic) PXGLayout *inputLayout; // ivar: _inputLayout


-(BOOL)isSpriteIndex:(unsigned int)arg0 decoratingSpriteWithIndex:(*unsigned int)arg1 ;
-(id)fences;
-(id)init;
-(id)initWithAnimator:(id)arg0 ;
-(id)rootLayout;
-(struct CGRect )visibleRect;
-(struct CGSize )contentSize;
-(struct CGSize )referenceSize;
-(unsigned int)numberOfSprites;
-(void)enumerateDescendantsLayoutsUsingBlock:(id)arg0 ;
-(void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)removeAllFences;


@end


#endif