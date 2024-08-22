// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSPICKERVIEW_H
#define STSPICKERVIEW_H

@class UIView, UIActivityIndicatorView, NSMutableArray, NSLayoutConstraint, UICollectionView;


#import "STSGridLayout.h"
#import "STSSearchNoticeView.h"

@interface STSPickerView : UIView {
    STSGridLayout *_gridLayout;
    UIActivityIndicatorView *_activityIndicator;
    CGFloat _lastContentOffsetY;
    BOOL _isDeceleratingQuickly;
    NSMutableArray *_constraints;
    NSLayoutConstraint *_headerTopConstraint;
}


@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) STSSearchNoticeView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (nonatomic) CGFloat topInset; // ivar: _topInset


-(id)init;
-(struct UIEdgeInsets )_updateContentInset;
-(void)layoutSubviews;
-(void)scrollToTopWithAnimation:(BOOL)arg0 ;
-(void)updateContentOffset:(CGFloat)arg0 ;
-(void)updateHeaderPositionOnDecelerationEnded;
-(void)updateHeaderPositionOnDraggingBegan;
-(void)updateHeaderPositionOnDraggingEndedWithVelocity:(struct CGPoint )arg0 ;
-(void)updateHeaderPositionOnScroll;


@end


#endif