// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISVISIBILITYOFFSETHELPER_H
#define ISVISIBILITYOFFSETHELPER_H

@class UIScrollView;
@protocol ISVisibilityOffsetComputer;

#import <Foundation/Foundation.h>


@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>



@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView; // ivar: __scrollView
@property (nonatomic, setter=_setTargetContentOffset:) CGPoint _targetContentOffset; // ivar: __targetContentOffset
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat maximumDistance; // ivar: _maximumDistance
@property (nonatomic) CGFloat maximumDistanceLag; // ivar: _maximumDistanceLag


-(struct CGRect )boundsForView:(id)arg0 inScrollView:(id)arg1 ;
-(struct CGRect )visibleRectForScrollView:(id)arg0 ;
-(struct ISVisibilityRange )_visibilityRangeForRect:(struct CGRect )arg0 ;
-(void)_updateDirectionIfNeeded;
-(void)computeVisibilityOffsetsInScrollView:(id)arg0 withTargetContentOffset:(struct CGPoint )arg1 usingBlock:(id)arg2 ;
-(void)getVisibility:(*BOOL)arg0 offset:(*CGFloat)arg1 targetVisibilityOffset:(*CGFloat)arg2 forView:(id)arg3 ;


@end


#endif