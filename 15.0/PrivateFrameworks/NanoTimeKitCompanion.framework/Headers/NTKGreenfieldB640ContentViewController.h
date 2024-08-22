// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDB640CONTENTVIEWCONTROLLER_H
#define NTKGREENFIELDB640CONTENTVIEWCONTROLLER_H

@class BPSWelcomeOptinViewController, NSArray, UICollectionView, UICollectionViewFlowLayout, NSIndexPath, UIImage, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, OS_dispatch_queue, NTKGreenfieldB640ContentViewControllerDelegate;


#import "NTKGreenfieldB640Model.h"

@interface NTKGreenfieldB640ContentViewController : BPSWelcomeOptinViewController <UICollectionViewDelegate, UICollectionViewDataSource>

 {
    NSUInteger _state;
    NSArray *_decodedRecipes;
    NTKGreenfieldB640Model *_greenfieldB640Model;
    UICollectionView *_facesCollectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    NSIndexPath *_selectedWatchBandIndexPath;
    UIImage *_watchBandImage;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (nonatomic) CGSize cellSize; // ivar: _cellSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<NTKGreenfieldB640ContentViewControllerDelegate> *greenfieldB640delegate; // ivar: _greenfieldB640delegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_defaultBandNameForCurrentPairedDevice;
-(id)_subtitleForError:(id)arg0 ;
-(id)_titleForError:(id)arg0 ;
-(id)alternateButtonTitle;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)detailString;
-(id)initForAddWatchFacesStateWithGreenfieldB640Model:(id)arg0 ;
-(id)initForErrorStateWithGreenfieldB640Model:(id)arg0 ;
-(id)suggestedButtonTitle;
-(id)titleString;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_didTapShowInternalErrorButton;
-(void)_notifyDelegateOfActionEventWatchFaceSelected;
-(void)_presentErrorAlert;
-(void)_setupContentForAddWathFaceWithBandImagePath:(id)arg0 bundle:(id)arg1 ;
-(void)_setupViews;
-(void)_updateSelectedState:(BOOL)arg0 forCellAtIndexPath:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif