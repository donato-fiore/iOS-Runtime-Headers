// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERSUMMARYCELL_H
#define HUTRIGGERSUMMARYCELL_H

@class UITableViewCell, UIColor, NSString, UIFont, UIImage, UIImageView, UILabel, NSArray, HFItem, UIView;
@protocol HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol, HUResizableCellDelegate;


#import "HUIconListView.h"

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol>



@property (nonatomic) BOOL canBeSelected; // ivar: _canBeSelected
@property (retain, nonatomic) UIColor *cellColor; // ivar: _cellColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (retain, nonatomic) UIImage *descriptionIcon; // ivar: _descriptionIcon
@property (retain, nonatomic) UIImageView *descriptionIconView; // ivar: _descriptionIconView
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideDescription; // ivar: _hideDescription
@property (nonatomic) BOOL hideDescriptionIcon; // ivar: _hideDescriptionIcon
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (retain, nonatomic) NSArray *horizontalLabelConstraints; // ivar: _horizontalLabelConstraints
@property (retain, nonatomic) HUIconListView *iconContainerView; // ivar: _iconContainerView
@property (retain, nonatomic) NSArray *iconDescriptors; // ivar: _iconDescriptors
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (retain, nonatomic) UIView *textContainerView; // ivar: _textContainerView
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) NSArray *verticalLabelConstraints; // ivar: _verticalLabelConstraints


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addDescriptionIconView;
-(void)_addDescriptionLabel;
-(void)_addTitleLabel;
-(void)prepareForReuse;
-(void)setUpIconContainerViewConstraints;
-(void)setUpTextContainerViewConstraints;
-(void)updateConstraints;
-(void)updateHorizontalLabelConstraints;
-(void)updateSelectionUI;
-(void)updateTitle;
-(void)updateUIIconsWithResults:(id)arg0 ;
-(void)updateUITextWithResults:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;
-(void)updateVerticalLabelConstraints;


@end


#endif