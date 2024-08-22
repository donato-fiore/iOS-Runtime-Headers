// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSTACKEDTEXTITEMGROUPVIEW_H
#define PKSTACKEDTEXTITEMGROUPVIEW_H

@class UIView, NSMutableArray;


#import "PKStackedTextItemGroup.h"

@interface PKStackedTextItemGroupView : UIView {
    CGFloat _intrinsicHeight;
    CGSize _boundsSize;
    BOOL _initialLayout;
    NSMutableArray *_itemViews;
    NSMutableArray *_snapshotsToRemove;
    BOOL _animated;
    NSInteger _slideMode;
}


@property (retain, nonatomic) PKStackedTextItemGroup *content; // ivar: _content
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) CGFloat headerPadding;
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSubviewsAnimated:(BOOL)arg0 ;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif