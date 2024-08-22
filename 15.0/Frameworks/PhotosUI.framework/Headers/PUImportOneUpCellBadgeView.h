// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUIMPORTONEUPCELLBADGEVIEW_H
#define PUIMPORTONEUPCELLBADGEVIEW_H

@class UICollectionReusableView, UIView, UIActivityIndicatorView;



@interface PUImportOneUpCellBadgeView : UICollectionReusableView

@property (retain, nonatomic) UIView *badgeContainerView; // ivar: _badgeContainerView
@property (nonatomic) NSInteger badgeType; // ivar: _badgeType
@property (retain, nonatomic) UIView *badgeView; // ivar: _badgeView
@property (nonatomic) BOOL inUpdateBlock; // ivar: _inUpdateBlock
@property (nonatomic) BOOL needsBadgeUpdate; // ivar: _needsBadgeUpdate
@property (nonatomic) BOOL selectable; // ivar: _selectable
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createSpinnerIfNecessary;
-(void)layoutSubviews;
-(void)performBadgeUpdates:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateBadgeUIIfNeeded;


@end


#endif