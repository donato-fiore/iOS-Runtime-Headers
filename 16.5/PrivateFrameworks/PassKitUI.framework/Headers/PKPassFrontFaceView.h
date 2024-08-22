// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSFRONTFACEVIEW_H
#define PKPASSFRONTFACEVIEW_H

@class UILabel, UIView;


#import "PKPassFaceView.h"
#import "PKBarcodeStickerView.h"
#import "PKLinkedAppIconView.h"

@interface PKPassFrontFaceView : PKPassFaceView {
    UILabel *_logoLabel;
    PKBarcodeStickerView *_barcodeView;
    UIView *_bottomRightItemView;
}


@property (readonly, nonatomic) PKBarcodeStickerView *barcodeView;
@property (nonatomic) NSInteger bottomRightItem; // ivar: _bottomRightItem
@property (readonly, nonatomic) PKLinkedAppIconView *linkedApp; // ivar: _linkedApp
@property (nonatomic) BOOL showsBarcodeView; // ivar: _showsBarcodeView
@property (nonatomic) BOOL showsLinkedApp; // ivar: _showsLinkedApp
@property (nonatomic) BOOL showsLiveBalance; // ivar: _showsLiveBalance


-(id)_rebucketAuxiliaryFields:(id)arg0 ;
-(id)_relevantBuckets;
-(id)createContactlessLogoView;
-(id)createExpiredLabel;
-(id)headerTemplate;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)passFaceTemplate;
-(id)templateForHeaderBucket;
-(id)templateForLayoutMode:(NSInteger)arg0 ;
-(struct CGRect )barcodeFrame;
-(struct CGSize )contentSize;
-(void)_positionBarcodeView;
-(void)createBodyContentViews;
-(void)createHeaderContentViews;
-(void)dealloc;
-(void)insertContentView:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)updateValidity;


@end


#endif