// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTPAGECUSTOMIZATIONCELL_H
#define SFSTARTPAGECUSTOMIZATIONCELL_H

@class UICollectionViewListCell, UISwitch;
@protocol SFStartPageCustomizationCellDelegate;



@interface SFStartPageCustomizationCell : UICollectionViewListCell {
    UISwitch *_switch;
}


@property (weak, nonatomic) NSObject<SFStartPageCustomizationCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isOn) BOOL on;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setAccessories:(id)arg0 ;
-(void)valueDidChange:(id)arg0 ;


@end


#endif