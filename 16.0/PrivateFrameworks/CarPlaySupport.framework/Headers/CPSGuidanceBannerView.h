// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSGUIDANCEBANNERVIEW_H
#define CPSGUIDANCEBANNERVIEW_H

@class CPUIBannerViewButton, UIImageView, UIStackView;


#import "CPSBannerView.h"
#import "CPSAbridgableLabel.h"

@interface CPSGuidanceBannerView : CPSBannerView

@property (retain, nonatomic) CPUIBannerViewButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UIImageView *applicationIconImageView; // ivar: _applicationIconImageView
@property (nonatomic) NSInteger currentInterfaceStyle; // ivar: _currentInterfaceStyle
@property (retain, nonatomic) CPSAbridgableLabel *guidanceDetailTextLabel; // ivar: _guidanceDetailTextLabel
@property (retain, nonatomic) UIImageView *guidanceImageView; // ivar: _guidanceImageView
@property (retain, nonatomic) CPSAbridgableLabel *guidanceTextLabel; // ivar: _guidanceTextLabel
@property (retain, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView


-(id)initWithBannerItem:(id)arg0 ;
-(void)_updateBannerSelectedState;
-(void)_updateLabels;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBannerWithBannerItem:(id)arg0 ;


@end


#endif