// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITSYSTEMCELL_H
#define MKTRANSITSYSTEMCELL_H

@class UIImageView, UIView, NSLayoutConstraint, UIImage, NSString;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"

@interface MKTransitSystemCell : MKCustomSeparatorCell {
    UIImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    UIView *_disclosureButton;
    NSLayoutConstraint *_imageToLabelConstraint;
    NSLayoutConstraint *_systemLabelToTopConstraint;
    NSLayoutConstraint *_systemLabelToBottomConstraint;
}


@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) BOOL showDisclosureButton; // ivar: _showDisclosureButton
@property (retain, nonatomic) UIImage *systemArtwork;
@property (copy, nonatomic) NSString *systemName;


-(id)_disclosureButton;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGAffineTransform )_transformForExpandedState:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)infoCardThemeChanged;
-(void)prepareForReuse;


@end


#endif