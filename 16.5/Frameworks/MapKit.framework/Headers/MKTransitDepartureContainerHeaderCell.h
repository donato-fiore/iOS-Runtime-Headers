// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRANSITDEPARTURECONTAINERHEADERCELL_H
#define MKTRANSITDEPARTURECONTAINERHEADERCELL_H

@class UIImageView, UILayoutGuide, NSLayoutConstraint;


#import "MKCustomSeparatorCell.h"
#import "MKTransitInfoLabelView.h"
#import "_MKUILabel.h"
#import "MKTransitDepartureContainerHeaderViewModel.h"

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitInfoLabelView *_containerArtworkView;
    _MKUILabel *_containerTitleLabel;
    UIImageView *_incidentImageView;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_artworkToTitleLabelHorizontalSpacingConstraint;
}


@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel; // ivar: _viewModel


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_commonInit;
-(void)_updateAppearance;


@end


#endif