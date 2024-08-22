// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSECTIONHEADERVIEW_H
#define GKSECTIONHEADERVIEW_H

@class UIView, NSLayoutConstraint, NSString;


#import "GKHeaderWithUnderlineView.h"
#import "GKLabel.h"
#import "GKButton.h"

@interface GKSectionHeaderView : GKHeaderWithUnderlineView

@property (nonatomic) BOOL allSectionItemsVisible; // ivar: _allSectionItemsVisible
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint; // ivar: _backgroundViewHeightConstraint
@property (nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (nonatomic) *unk itemCountFormatter; // ivar: _itemCountFormatter
@property (retain, nonatomic) GKLabel *leftLabel; // ivar: _leftLabel
@property (retain, nonatomic) NSString *leftText;
@property (nonatomic) BOOL manualItemCount; // ivar: _manualItemCount
@property (nonatomic) NSInteger maxItemCount; // ivar: _maxItemCount
@property (nonatomic) NSInteger maxRange; // ivar: _maxRange
@property (nonatomic) SEL rightAction; // ivar: _rightAction
@property (retain, nonatomic) GKButton *rightButton; // ivar: _rightButton
@property (nonatomic) id *rightTarget; // ivar: _rightTarget
@property (retain, nonatomic) NSString *rightText;
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (nonatomic) SEL showAllAction; // ivar: _showAllAction


+(id)padMetrics;
+(id)phoneMetrics;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)establishConstraints;
-(void)prepareForReuse;
-(void)rightButtonTouched:(id)arg0 ;
-(void)updateGutterConstraints;
-(void)updateLabel;


@end


#endif