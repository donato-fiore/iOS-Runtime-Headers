// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSEMPTYVIEW_H
#define CPSEMPTYVIEW_H

@class UIView, NSArray;


#import "CPSAbridgableLabel.h"

@interface CPSEmptyView : UIView

@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSArray *subtitleVariants;
@property (retain, nonatomic) CPSAbridgableLabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSArray *titleVariants;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLabelTraits;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif