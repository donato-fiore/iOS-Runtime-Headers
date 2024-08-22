// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULOCKUPVIEW_H
#define HULOCKUPVIEW_H

@class UIView, NSString, UILabel, NSLayoutConstraint, HFItem, UIStackView;
@protocol HUCellProtocol, HUExpandableTextViewDelegate, HULockupViewDelegate, HULockupInternalResizingDelegate, HUResizableCellDelegate;


#import "HUExpandableTextView.h"
#import "HUDownloadControl.h"

@interface HULockupView : UIView <HUCellProtocol, HUExpandableTextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HULockupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUExpandableTextView *descriptionExpandableTextView; // ivar: _descriptionExpandableTextView
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) HUDownloadControl *downloadControl; // ivar: _downloadControl
@property (retain, nonatomic) NSLayoutConstraint *downloadControlCenterYConstraint; // ivar: _downloadControlCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *downloadControlTopConstraint; // ivar: _downloadControlTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *downloadControlWidthConstraint; // ivar: _downloadControlWidthConstraint
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger iconSize; // ivar: _iconSize
@property (retain, nonatomic) UIView *iconView; // ivar: _iconView
@property (weak, nonatomic) NSObject<HULockupInternalResizingDelegate> *internalViewResizingDelegate; // ivar: _internalViewResizingDelegate
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) UILabel *secondaryDetailLabel; // ivar: _secondaryDetailLabel
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_maxPossibleTitleLengthForDownloadControl;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initializeIconViewWithSize:(NSUInteger)arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)expandableTextViewDidCollapse:(id)arg0 ;
-(void)expandableTextViewDidExpand:(id)arg0 ;
-(void)updateDescriptionExpandableTextView:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateIconView:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif