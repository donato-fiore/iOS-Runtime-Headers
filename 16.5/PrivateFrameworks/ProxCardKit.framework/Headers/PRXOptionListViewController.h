// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXOPTIONLISTVIEWCONTROLLER_H
#define PRXOPTIONLISTVIEWCONTROLLER_H

@class UICollectionView, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;


#import "PRXCardContentViewController.h"

@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDelegate, UICollectionViewDataSource>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *formatterBlock; // ivar: _formatterBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (copy, nonatomic) NSArray *selectedOptions;
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_createCollectionViewLayout;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;


@end


#endif