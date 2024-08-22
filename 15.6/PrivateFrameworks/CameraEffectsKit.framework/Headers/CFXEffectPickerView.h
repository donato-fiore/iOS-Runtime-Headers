// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXEFFECTPICKERVIEW_H
#define CFXEFFECTPICKERVIEW_H

@class UIView, NSString, UIImage;
@protocol UICollectionViewDataSource, JFXEffectPreviewManagerDelegate, UICollectionViewDelegateFlowLayout, CFXEffectPickerViewDataSource, CFXEffectPickerViewDelegate;


#import "JFXEffectPreviewManager.h"
#import "JFXEffectStaticPreviewOptions.h"

@interface CFXEffectPickerView : UIView <UICollectionViewDataSource, JFXEffectPreviewManagerDelegate, UICollectionViewDelegateFlowLayout>



@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (nonatomic, getter=isContinuousPreviewEnabled) BOOL continuousPreviewEnabled; // ivar: _continuousPreviewEnabled
@property (weak, nonatomic) NSObject<CFXEffectPickerViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXEffectPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *previewBackgroundImage; // ivar: _previewBackgroundImage
@property (retain, nonatomic) JFXEffectPreviewManager *previewManager; // ivar: _previewManager
@property (nonatomic) BOOL previewingIsWaitingForConfiguration; // ivar: _previewingIsWaitingForConfiguration
@property (retain, nonatomic) JFXEffectStaticPreviewOptions *staticPreviewOptions; // ivar: _staticPreviewOptions
@property (readonly) Class superclass;
@property (nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize
@property (nonatomic, getter=isUsingCameraForContinuousPreview) BOOL useCameraForContinuousPreview; // ivar: _useCameraForContinuousPreview


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)effectIndexForCellIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfCollectionViewItems;
-(id)collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionViewLayout;
-(id)contentView;
-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(id)effectPickerNibName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )previewSizeInPixels;
-(void)applyEffectAtCellIndex:(NSUInteger)arg0 ;
-(void)collectionView:(id)arg0 didResize:(struct CGSize )arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)didResizeCollectionViewToSize:(struct CGSize )arg0 ;
-(void)didScrollCollectionView;
-(void)didSelectItemAtCellIndex:(NSUInteger)arg0 ;
-(void)effectDidLoadForCell:(id)arg0 effect:(id)arg1 ;
-(void)effectPreviewManager:(id)arg0 didUpdateContinousPreviewsForEffectIDs:(id)arg1 ;
-(void)orientationDidChange;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sharedInit;
-(void)startPreviewing;
-(void)stopPreviewing;
-(void)subviewsDidLoad;
-(void)updatePreviewEffects;
-(void)updatePreviewEffectsWhenReloadComplete;


@end


#endif