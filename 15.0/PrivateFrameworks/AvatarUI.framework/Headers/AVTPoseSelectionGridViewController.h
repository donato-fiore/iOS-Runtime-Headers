// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPOSESELECTIONGRIDVIEWCONTROLLER_H
#define AVTPOSESELECTIONGRIDVIEWCONTROLLER_H

@class UIViewController, UIColor, UIView, NSString, UICollectionViewFlowLayout, UIImage, UICollectionView, AVTStickerConfiguration, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarRecord, AVTPoseSelectionGridViewControllerDelegate, AVTTaskScheduler, OS_dispatch_queue;


#import "AVTUIStickerGeneratorPool.h"
#import "AVTUIStickerRenderer.h"

@interface AVTPoseSelectionGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>



@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIView *cameraCellView; // ivar: _cameraCellView
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTPoseSelectionGridViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool; // ivar: _generatorPool
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (retain, nonatomic) UICollectionView *poseCollectionView; // ivar: _poseCollectionView
@property (retain, nonatomic) NSObject<AVTTaskScheduler> *scheduler; // ivar: _scheduler
@property (retain, nonatomic) AVTStickerConfiguration *selectedStickerConfiguration; // ivar: _selectedStickerConfiguration
@property (retain, nonatomic) NSArray *stickerConfigurations; // ivar: _stickerConfigurations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stickerGenerationQueue; // ivar: _stickerGenerationQueue
@property (retain, nonatomic) AVTUIStickerRenderer *stickerRenderer; // ivar: _stickerRenderer
@property (readonly) Class superclass;
@property (nonatomic) BOOL willDisplayCameraItem; // ivar: _willDisplayCameraItem


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)configurationForIndex:(NSInteger)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 poseConfigurations:(id)arg1 allowsCameraCapture:(BOOL)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)updateFlowLayoutItemSize;
-(void)updateWithAvatarRecord:(id)arg0 stickerConfigurations:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif