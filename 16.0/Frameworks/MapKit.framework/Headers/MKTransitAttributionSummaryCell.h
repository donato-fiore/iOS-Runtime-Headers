// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITATTRIBUTIONSUMMARYCELL_H
#define MKTRANSITATTRIBUTIONSUMMARYCELL_H

@class NSLayoutConstraint, NSString;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorCell {
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (copy, nonatomic) NSString *attributionSummary;


-(BOOL)_newStationCardUIEnabled;
-(id)_moreString;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setAttribution:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif