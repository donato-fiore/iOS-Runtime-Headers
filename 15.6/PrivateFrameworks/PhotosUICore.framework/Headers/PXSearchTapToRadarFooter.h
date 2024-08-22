// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHTAPTORADARFOOTER_H
#define PXSEARCHTAPTORADARFOOTER_H

@class UICollectionReusableView, UILabel;



@interface PXSearchTapToRadarFooter : UICollectionReusableView

@property (retain, nonatomic) UILabel *tapToRadarAppleInternalLabel; // ivar: _tapToRadarAppleInternalLabel
@property (retain, nonatomic) UILabel *tapToRadarDescriptionLabel; // ivar: _tapToRadarDescriptionLabel
@property (copy, nonatomic) id *tapToRadarHandler; // ivar: _tapToRadarHandler


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectTapToRadarButton;
-(void)prepareForReuse;
-(void)shouldDisplayRadarDescriptionLabel:(BOOL)arg0 ;


@end


#endif