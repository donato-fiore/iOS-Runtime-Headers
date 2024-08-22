// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTIMELINEHEADERVIEW_H
#define HRTIMELINEHEADERVIEW_H

@class UITableViewHeaderFooterView;
@protocol HRTimelineHeaderViewDelegate;



@interface HRTimelineHeaderView : UITableViewHeaderFooterView {
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subtitleLabel;
    ? $__lazy_storage_$_backgroundEffectView;
    ? $__lazy_storage_$_separatorView;
}


@property (nonatomic, weak) NSObject<HRTimelineHeaderViewDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL floating;
@property (nonatomic) BOOL separatorViewHidden; // ivar: separatorViewHidden


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)applyStyleFromNavigationBar:(id)arg0 ;
-(void)applyTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif