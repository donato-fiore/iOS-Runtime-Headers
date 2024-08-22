// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12COREAUDIOKIT23AUGENERICVIEWHEADERCELL_H
#define _TTC12COREAUDIOKIT23AUGENERICVIEWHEADERCELL_H

@class UICollectionViewCell, UILabel;



@interface _TtC12CoreAudioKit23AUGenericViewHeaderCell : UICollectionViewCell {
    ? audioUnit;
}


@property (nonatomic, weak) UILabel *auManufacturerLabel; // ivar: auManufacturerLabel
@property (nonatomic, weak) UILabel *auNameLabel; // ivar: auNameLabel
@property (nonatomic, weak) UILabel *auVersionLabel; // ivar: auVersionLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif