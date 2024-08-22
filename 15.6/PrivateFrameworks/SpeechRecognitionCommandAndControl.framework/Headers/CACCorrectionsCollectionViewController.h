// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACCORRECTIONSCOLLECTIONVIEWCONTROLLER_H
#define CACCORRECTIONSCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString;
@protocol CACCorrectionsCollectionViewControllerDelegate;



@interface CACCorrectionsCollectionViewController : UICollectionViewController

@property (copy, nonatomic) NSArray *alternatives; // ivar: _alternatives
@property (weak, nonatomic) NSObject<CACCorrectionsCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *emojis; // ivar: _emojis
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)_canShowWhileLocked;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_itemsInSection:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(void)_didTapCancel:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif