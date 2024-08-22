// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDEBUGGINGSPECVIEWCONTROLLER_H
#define UIDEBUGGINGSPECVIEWCONTROLLER_H

@class NSString, NSMutableArray;
@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController;


#import "UIViewController.h"
#import "UICollectionView.h"
#import "UICollectionViewFlowLayout.h"
#import "UIView.h"

@interface UIDebuggingSpecViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (nonatomic) CGFloat originalOpacity; // ivar: _originalOpacity
@property (retain, nonatomic) UIView *spec; // ivar: _spec
@property (retain, nonatomic) NSMutableArray *specImages; // ivar: _specImages
@property (readonly) Class superclass;


-(BOOL)startMediaBrowserFromViewController:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)gotDeleteGesture:(id)arg0 ;
-(void)gotPanGesture:(id)arg0 ;
-(void)hideImage;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)prepareForMediaBrowser;
-(void)viewDidLoad;


@end


#endif