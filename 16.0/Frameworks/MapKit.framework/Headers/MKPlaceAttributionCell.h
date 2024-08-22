// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEATTRIBUTIONCELL_H
#define MKPLACEATTRIBUTIONCELL_H

@class NSArray, NSLayoutConstraint, UITapGestureRecognizer;
@protocol MKPlaceAttributionCellButtonDelegate, MKPlaceAttributionCellDelegate;


#import "MKPlaceSectionRowView.h"
#import "_MKUILabel.h"
#import "MKPlaceAttributionCellButton.h"

@interface MKPlaceAttributionCell : MKPlaceSectionRowView <MKPlaceAttributionCellButtonDelegate>

 {
    NSArray *_visibleConstraints;
    NSLayoutConstraint *_collapsedConstraint;
    BOOL _highlighted;
}


@property (weak, nonatomic) NSObject<MKPlaceAttributionCellDelegate> *cellDelegate; // ivar: _cellDelegate
@property (retain, nonatomic) _MKUILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineToTop; // ivar: _labelBaselineToTop
@property (retain, nonatomic) MKPlaceAttributionCellButton *labelButton; // ivar: _labelButton
@property (retain, nonatomic) NSLayoutConstraint *labelLastBaselineToBottom; // ivar: _labelLastBaselineToBottom
@property (retain, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // ivar: _selectGestureRecognizer


+(id)fontForLabel;
-(BOOL)isHighlighted;
-(CGFloat)currentHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)attributionCellButton:(id)arg0 isHighighted:(BOOL)arg1 executeAction:(BOOL)arg2 ;
-(void)attributionClicked;
-(void)createConstraints;
-(void)setAttributionString:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif