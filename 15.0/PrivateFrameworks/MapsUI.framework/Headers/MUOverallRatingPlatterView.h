// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUOVERALLRATINGPLATTERVIEW_H
#define MUOVERALLRATINGPLATTERVIEW_H

@class UIView, UILabel, NSAttributedString;
@protocol MUOverallRatingPlatterViewModel;



@interface MUOverallRatingPlatterView : UIView {
    UILabel *_attributionLabel;
    UILabel *_starLabel;
    UILabel *_ratingLabel;
}


@property (readonly, nonatomic) NSAttributedString *ratingString;
@property (readonly, nonatomic) NSAttributedString *starString;
@property (retain, nonatomic) NSObject<MUOverallRatingPlatterViewModel> *viewModel; // ivar: _viewModel


-(id)_attributesWithFont:(id)arg0 color:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateAttributiion;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif