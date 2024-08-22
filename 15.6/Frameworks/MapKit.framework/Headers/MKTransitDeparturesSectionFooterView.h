// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITDEPARTURESSECTIONFOOTERVIEW_H
#define MKTRANSITDEPARTURESSECTIONFOOTERVIEW_H

@class NSLayoutConstraint;


#import "MKCustomSeparatorCell.h"
#import "MKButtonWithTargetArgument.h"

@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell {
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (readonly, nonatomic) MKButtonWithTargetArgument *button; // ivar: _button


+(CGFloat)defaultHeight;
+(id)_font;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)tintColorDidChange;


@end


#endif