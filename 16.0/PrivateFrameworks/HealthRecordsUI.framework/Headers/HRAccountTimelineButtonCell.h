// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRACCOUNTTIMELINEBUTTONCELL_H
#define HRACCOUNTTIMELINEBUTTONCELL_H

@class UITableViewCell, NSString;



@interface HRAccountTimelineButtonCell : UITableViewCell {
    ? buttonText;
    ? explanationText;
    ? $__lazy_storage_$_buttonLabel;
    ? $__lazy_storage_$_explanationLabel;
    ? $__lazy_storage_$_containerView;
    ? $__lazy_storage_$_separatorView;
    ? customConstraints;
}


@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic) BOOL roundBottomCorners; // ivar: roundBottomCorners


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif