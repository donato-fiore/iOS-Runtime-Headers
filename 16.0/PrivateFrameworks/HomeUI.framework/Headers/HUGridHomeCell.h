// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDHOMECELL_H
#define HUGRIDHOMECELL_H

@class HFItem, NSArray, UIImage, UIImageView, UILabel, UIVisualEffectView, UIStackView;


#import "HUGridCell.h"
#import "HUCCInfoMosaicGridView.h"
#import "HUMosaicLayoutGeometry.h"

@interface HUGridHomeCell : HUGridCell {
    HFItem *_item;
}


@property (retain, nonatomic) NSArray *cellConstraints; // ivar: _cellConstraints
@property (retain, nonatomic) UIImage *homeImage; // ivar: _homeImage
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) HUCCInfoMosaicGridView *infoView; // ivar: _infoView
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIVisualEffectView *secondaryLabelEffectView; // ivar: _secondaryLabelEffectView
@property (nonatomic) BOOL shouldShowAsEmptyHome; // ivar: _shouldShowAsEmptyHome
@property (nonatomic) BOOL shouldShowHomeName; // ivar: _shouldShowHomeName
@property (retain, nonatomic) UIStackView *verticalStackView; // ivar: _verticalStackView


+(BOOL)requiresConstraintBasedLayout;
-(id)cellLayoutOptions;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)item;
-(void)_invalidateConstraints;
-(void)_setupCell;
-(void)_updatePrimaryLabel;
-(void)layoutOptionsDidChange;
-(void)prepareForReuse;
-(void)setItem:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif