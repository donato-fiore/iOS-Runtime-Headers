// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPHOTOSTACKBALLOONVIEW_H
#define CKPHOTOSTACKBALLOONVIEW_H

@class NSString;
@protocol PXMessagesStackViewDelegate, CKPhotoStackBalloonViewDelegate;


#import "CKGenericPhotoStackBalloonView.h"
#import "CKMediaObjectAssetDataSourceManager.h"
#import "CKMediaObjectImageProvider.h"

@interface CKPhotoStackBalloonView : CKGenericPhotoStackBalloonView <PXMessagesStackViewDelegate>



@property (retain, nonatomic) CKMediaObjectAssetDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKPhotoStackBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMediaObjectImageProvider *mediaProvider;
@property (readonly) Class superclass;


-(BOOL)stackView:(id)arg0 shouldAutoplayAsset:(id)arg1 ;
-(id)_createStackView;
-(id)transitionViewForCurrentItem:(id)arg0 sourceFrame:(struct CGRect *)arg1 ;
-(void)_additionalItemsCountDidChange;
-(void)_updateAdditionalItemsCount;
-(void)configureForMessagePart:(id)arg0 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)removeTransitionView;
-(void)stackView:(id)arg0 didChangeCurrentAssetReference:(id)arg1 isProgrammaticChange:(BOOL)arg2 didChangeIndex:(BOOL)arg3 ;
-(void)stackView:(id)arg0 didSelectAssetReference:(id)arg1 ;
-(void)stackViewDidSelectAdditionalItemsCard:(id)arg0 ;


@end


#endif