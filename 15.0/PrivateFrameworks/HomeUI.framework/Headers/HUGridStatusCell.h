// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDSTATUSCELL_H
#define HUGRIDSTATUSCELL_H

@class HFItem, UIView, NSString, UILabel, UIStackView, NSArray;
@protocol HUAccessoryViewCellProtocol, HUIconRenouncing;


#import "HUGridCell.h"
#import "HUIconView.h"
#import "HUGridStatusCellLayoutOptions.h"
#import "HUGridStatusCellTextView.h"

@interface HUGridStatusCell : HUGridCell <HUAccessoryViewCellProtocol, HUIconRenouncing>

 {
    HFItem *_item;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIStackView *descriptionStackView; // ivar: _descriptionStackView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *largeDescriptionLabel; // ivar: _largeDescriptionLabel
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (weak, nonatomic) HUGridStatusCellLayoutOptions *statusCellLayoutOptions; // ivar: _statusCellLayoutOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) HUGridStatusCellTextView *titleTextView; // ivar: _titleTextView


+(BOOL)requiresConstraintBasedLayout;
+(BOOL)shouldUseOutlineStyleForCategory:(NSUInteger)arg0 ;
+(Class)layoutOptionsClass;
+(id)outlineStyleBackgroundEffect;
-(BOOL)managesOwnBackgroundViewLayout;
-(NSUInteger)iconDisplayStyle;
-(id)_iconBadgeViewWithImage:(id)arg0 ;
-(id)_numberedBadgeViewWithValue:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(void)_invalidateConstraints;
-(void)_setupStatusCell;
-(void)_updateBadge;
-(void)_updateIconAnimated:(BOOL)arg0 ;
-(void)_updateLabels;
-(void)_updateMask;
-(void)_updateStyle;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutOptionsDidChange;
-(void)prepareForReuse;
-(void)reclaimIconIfPossible;
-(void)renounceIcon;
-(void)setItem:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif