// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICOLLECTIONVIEWANIMATION_H
#define UICOLLECTIONVIEWANIMATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UICollectionViewLayoutAttributes.h"
#import "UICollectionReusableView.h"

@interface UICollectionViewAnimation : NSObject {
    NSMutableArray *_completionHandlers;
    NSMutableArray *_startupHandlers;
    id *_animationBlock;
    ? _collectionViewAnimationFlags;
}


@property (readonly, nonatomic) BOOL animateFromCurrentPosition;
@property (readonly, nonatomic) BOOL deleteAfterAnimation;
@property (readonly, nonatomic) CGFloat endFraction; // ivar: _endFraction
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *finalLayoutAttributes; // ivar: _finalLayoutAttributes
@property (nonatomic) BOOL parentInCollectionViewDuringAnimation; // ivar: _parentInCollectionViewDuringAnimation
@property (nonatomic) BOOL rasterizeAfterAnimation;
@property (nonatomic) BOOL resetRasterizationAfterAnimation;
@property (readonly, nonatomic) CGFloat startFraction; // ivar: _startFraction
@property (readonly, nonatomic) BOOL updateZIndexAfterAnimation;
@property (readonly, nonatomic) UICollectionReusableView *view; // ivar: _view
@property (readonly, nonatomic) NSInteger viewType; // ivar: _viewType


-(id)description;
-(id)initWithView:(id)arg0 viewType:(NSInteger)arg1 finalLayoutAttributes:(id)arg2 startFraction:(CGFloat)arg3 endFraction:(CGFloat)arg4 animateFromCurrentPostion:(BOOL)arg5 deleteAfterAnimation:(BOOL)arg6 customAnimations:(id)arg7 ;
-(void)addCompletionHandler:(id)arg0 ;
-(void)addStartupHandler:(id)arg0 ;
-(void)start;
-(void)startWithAnimator:(id)arg0 ;


@end


#endif