// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKGENERICPHOTOSTACKBALLOONVIEW_H
#define CKGENERICPHOTOSTACKBALLOONVIEW_H

@class PXAssetReference, PXAssetsDataSourceManager, UIView<CKGradientReferenceView>, PXUIMediaProvider, PXMessagesStackView;


#import "CKBalloonView.h"

@interface CKGenericPhotoStackBalloonView : CKBalloonView

@property (readonly, nonatomic) PXAssetReference *currentAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (readonly, nonatomic) CGFloat horizontalContentMargin; // ivar: _horizontalContentMargin
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXMessagesStackView *stackView; // ivar: _stackView
@property (nonatomic) BOOL wantsContactImageLayout; // ivar: _wantsContactImageLayout


-(CGFloat)horizontalContentMarginForSize:(struct CGSize )arg0 ;
-(id)_createStackView;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;


@end


#endif