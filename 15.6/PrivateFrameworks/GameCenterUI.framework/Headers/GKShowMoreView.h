// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSHOWMOREVIEW_H
#define GKSHOWMOREVIEW_H

@class UICollectionReusableView, UICollectionView, NSLayoutConstraint, UIActivityIndicatorView;


#import "GKLabel.h"

@interface GKShowMoreView : UICollectionReusableView

@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSLayoutConstraint *horizontalContraint; // ivar: _horizontalContraint
@property (retain, nonatomic) GKLabel *label; // ivar: _label
@property (nonatomic) BOOL loading; // ivar: _loading
@property (nonatomic) NSInteger numberToShow; // ivar: _numberToShow
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex
@property (nonatomic) SEL showMoreAction; // ivar: _showMoreAction
@property (nonatomic) BOOL showShowAll; // ivar: _showShowAll
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic) CGFloat textAlignmentOffset; // ivar: _textAlignmentOffset
@property (retain, nonatomic) NSLayoutConstraint *verticalContraint; // ivar: _verticalContraint


+(BOOL)requiresConstraintBasedLayout;
-(id)baseTextStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateConstraints;
-(void)updateLabel;


@end


#endif