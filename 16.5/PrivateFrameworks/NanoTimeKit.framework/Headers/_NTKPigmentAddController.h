// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPIGMENTADDCONTROLLER_H
#define _NTKPIGMENTADDCONTROLLER_H

@class UIViewController, NSString, UICollectionView, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIAdaptivePresentationControllerDelegate;


#import "NTKFace.h"
#import "NTKFaceView.h"
#import "NTKPigmentEditOptionArray.h"

@interface _NTKPigmentAddController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIAdaptivePresentationControllerDelegate>

 {
    NTKFace *_face;
    NTKFaceView *_faceView;
    NSString *_slot;
    id *_willExitHandler;
    UICollectionView *_collectionView;
    NSArray *_sections;
    NTKPigmentEditOptionArray *_availablePigments;
    NTKPigmentEditOptionArray *_addedPigments;
    NTKPigmentEditOptionArray *_removedPigments;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_collectionViewLayout;
-(id)_pigmentForIndexPath:(id)arg0 ;
-(id)collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithFace:(id)arg0 faceView:(id)arg1 slot:(id)arg2 willExitHandler:(id)arg3 ;
-(void)_callWillExitHandlerWithChanges:(BOOL)arg0 ;
-(void)_dismissWithChanges:(BOOL)arg0 ;
-(void)_donePressed;
-(void)_handleOptionsChangedNotification;
-(void)_setupPigments;
-(void)_updateSelections;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif