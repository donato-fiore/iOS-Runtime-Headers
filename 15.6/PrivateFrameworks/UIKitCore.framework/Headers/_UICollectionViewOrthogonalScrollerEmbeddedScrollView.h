// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWORTHOGONALSCROLLEREMBEDDEDSCROLLVIEW_H
#define _UICOLLECTIONVIEWORTHOGONALSCROLLEREMBEDDEDSCROLLVIEW_H

@class NSString;
@protocol _UICollectionViewOrthogonalScrollView;


#import "UIScrollView.h"
#import "UIFocusContainerGuide.h"
#import "UICollectionView.h"

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView <_UICollectionViewOrthogonalScrollView>

 {
    UIFocusContainerGuide *_sectionFocusContainerGuide;
}


@property (nonatomic) UIEdgeInsets baseContentInsets; // ivar: _baseContentInsets
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) CGPoint contentOffset;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger section; // ivar: _section
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;


-(NSUInteger)_edgesPropagatingSafeAreaInsetsToDescendants;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_panGestureLocationInView:(id)arg0 ;
-(struct CGPoint )_panGestureVelocityInView:(id)arg0 ;
-(struct CGPoint )_pointByApplyingBaseContentInsetsToPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_pointByRemovingBaseContentInsetsFromPoint:(struct CGPoint )arg0 ;
-(void)_focusedItem:(id)arg0 isMinX:(*BOOL)arg1 isMaxX:(*BOOL)arg2 isMinY:(*BOOL)arg3 isMaxY:(*BOOL)arg4 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif