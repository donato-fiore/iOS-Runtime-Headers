// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUNEARESTSTATIONROWVIEW_H
#define MUNEARESTSTATIONROWVIEW_H

@class UILabel, UIImageView, UIStackView, MKMapItem, NSString;


#import "MUPlaceSectionRowView.h"
#import "MULoadingOverlayController.h"

@interface MUNearestStationRowView : MUPlaceSectionRowView {
    UILabel *_titleLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    UIImageView *_stopImageView;
    UIStackView *_labelStackView;
    MKMapItem *_nearestStation;
    MULoadingOverlayController *_loadingOverlayController;
}


@property (retain, nonatomic) NSString *distanceString;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateFonts;
-(void)configureWithNearestStation:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif