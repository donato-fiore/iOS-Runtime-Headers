// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDIAGNOSTICSCAMERACLIPPOSTERFRAMESVIEWCONTROLLER_H
#define HUDIAGNOSTICSCAMERACLIPPOSTERFRAMESVIEWCONTROLLER_H

@class UIViewController, HMCameraClip, HMCameraProfile, NSString, NSOperationQueue, UICollectionView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;



@interface HUDiagnosticsCameraClipPosterFramesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>



@property (retain, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSOperationQueue *diagnosticOperationQueue; // ivar: _diagnosticOperationQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionView *posterFrameCollectionView; // ivar: _posterFrameCollectionView
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCameraClip:(id)arg0 cameraProfile:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif