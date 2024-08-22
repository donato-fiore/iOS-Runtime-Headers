// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODESTICKERVIEW_H
#define PKBARCODESTICKERVIEW_H

@class UIButton, PKBarcode, UIImage, UIImageView, NSMutableArray, UILabel, UIFont;



@interface PKBarcodeStickerView : UIButton {
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    BOOL _barcodeViewInvalidated;
    BOOL _drawBarcode;
}


@property (nonatomic) UIFont *altTextFont;
@property (nonatomic) CGFloat altTextInset; // ivar: _altTextInset
@property (nonatomic) CGSize desiredBarcodeSize; // ivar: _desiredBarcodeSize
@property (nonatomic) BOOL shouldMatteCode; // ivar: _shouldMatteCode
@property (nonatomic) NSInteger validity; // ivar: _validity


+(NSInteger)validityStateForPass:(id)arg0 ;
+(struct CGSize )_sizeForBarcode:(id)arg0 ;
+(struct PKBarcodeQuietZone )_quietZoneForBarcode:(id)arg0 ;
-(id)_resizedBarcode:(id)arg0 desiredSize:(struct CGSize )arg1 ;
-(id)barcodeImage;
-(id)initWithBarcode:(id)arg0 validityState:(NSInteger)arg1 ;
-(struct CGSize )_varianceForBarcode:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_generateMatteRect:(struct CGRect *)arg0 barcodeRect:(struct CGRect *)arg1 altTextRect:(struct CGRect *)arg2 boundingSize:(struct CGSize )arg3 ;
-(void)_updateDrawBarcode;
-(void)_updateMatteViewHiding;
-(void)_updateValidity;
-(void)layoutSubviews;


@end


#endif