// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODETABLEVIEWCELL_H
#define PKBARCODETABLEVIEWCELL_H

@class UITableViewCell, PKPass;


#import "PKBarcodeStickerView.h"

@interface PKBarcodeTableViewCell : UITableViewCell {
    PKBarcodeStickerView *_barcodeStickerView;
    CGSize _maximumBarcodeSize;
}


@property (nonatomic) NSInteger barcodeStyle; // ivar: _barcodeStyle
@property (retain, nonatomic) PKPass *pass; // ivar: _pass


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_computeMaxBarcodeSize;
-(void)layoutSubviews;


@end


#endif