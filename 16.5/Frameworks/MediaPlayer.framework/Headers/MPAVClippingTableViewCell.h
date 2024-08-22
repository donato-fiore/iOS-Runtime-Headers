// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPAVCLIPPINGTABLEVIEWCELL_H
#define MPAVCLIPPINGTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface MPAVClippingTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (retain, nonatomic) UIView *clippingContentView; // ivar: _clippingContentView
@property (nonatomic) UIEdgeInsets clippingInsets; // ivar: _clippingInsets
@property (retain, nonatomic) UIView *clippingMaskView; // ivar: _clippingMaskView
@property (nonatomic) BOOL shouldHideSectionBottomSeparator; // ivar: _shouldHideSectionBottomSeparator
@property (readonly, nonatomic) UIView *topSeparatorView; // ivar: _topSeparatorView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg0 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryView:(id)arg0 ;


@end


#endif