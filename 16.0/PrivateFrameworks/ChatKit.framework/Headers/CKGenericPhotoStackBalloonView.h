// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKGENERICPHOTOSTACKBALLOONVIEW_H
#define CKGENERICPHOTOSTACKBALLOONVIEW_H

@class PXAssetReference, PXAssetsDataSourceManager, NSString, UIView<CKGradientReferenceView>, PXUIMediaProvider, PXMessagesStackView;
@protocol PXAssetsDataSourceManagerObserver;


#import "CKBalloonView.h"

@interface CKGenericPhotoStackBalloonView : CKBalloonView <PXAssetsDataSourceManagerObserver>



@property (readonly, nonatomic) PXAssetReference *currentAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalContentMargin; // ivar: _horizontalContentMargin
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXMessagesStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsContactImageLayout; // ivar: _wantsContactImageLayout


-(BOOL)_scrollLeadingAnimated:(BOOL)arg0 ;
-(BOOL)_scrollTrailingAnimated:(BOOL)arg0 ;
-(BOOL)pageLeftAnimated:(BOOL)arg0 ;
-(BOOL)pageRightAnimated:(BOOL)arg0 ;
-(CGFloat)horizontalContentMarginForSize:(struct CGSize )arg0 ;
-(id)_createStackView;
-(id)createOverlayImageView;
-(void)_additionalItemsCountDidChange;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setHasOverlay:(BOOL)arg0 autoDismiss:(BOOL)arg1 ;


@end


#endif