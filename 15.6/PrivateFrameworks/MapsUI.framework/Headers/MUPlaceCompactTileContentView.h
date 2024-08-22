// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACECOMPACTTILECONTENTVIEW_H
#define MUPLACECOMPACTTILECONTENTVIEW_H

@class UIView, UIImageView, UIView<MULabelViewProtocol>, UILayoutGuide, NSString;
@protocol MUPlaceTileTemplateView, MUPlaceTileViewModel;


#import "MUPlaceTileCellConfiguration.h"

@interface MUPlaceCompactTileContentView : UIView <MUPlaceTileTemplateView>

 {
    UIImageView *_iconView;
    UIView<MULabelViewProtocol> *_primaryLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UILayoutGuide *_contentLayoutGuide;
    MUPlaceTileCellConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) NSObject<MUPlaceTileViewModel> *viewModel; // ivar: _viewModel


+(struct CGSize )_preferredSizeForViewModel:(id)arg0 cellConfiguration:(id)arg1 maximumMeasurements:(id)arg2 ;
+(struct CGSize )preferredSizeForViewModels:(id)arg0 cellConfiguration:(id)arg1 ;
-(id)initWithCellConfiguration:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif