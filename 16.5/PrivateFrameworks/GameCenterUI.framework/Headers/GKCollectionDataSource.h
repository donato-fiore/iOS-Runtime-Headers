// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCOLLECTIONDATASOURCE_H
#define GKCOLLECTIONDATASOURCE_H

@class NSString, UIViewController, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;

#import <Foundation/Foundation.h>


@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (nonatomic) NSString *analyticsEvent; // ivar: _analyticsEvent
@property (nonatomic) NSString *analyticsEventType; // ivar: _analyticsEventType
@property (nonatomic) BOOL breakSearchInputTextIntoMultipleTerms; // ivar: _breakSearchInputTextIntoMultipleTerms
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSearching;
@property (readonly, nonatomic) NSInteger itemCount;
@property (nonatomic) BOOL onDarkBackground; // ivar: _onDarkBackground
@property (readonly, nonatomic) CGFloat preferredCollectionHeight;
@property (weak, nonatomic) UIViewController *presentationViewController; // ivar: _presentationViewController
@property (retain, nonatomic) NSArray *searchTerms; // ivar: _searchTerms
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, nonatomic) NSString *sectionHeaderText;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useStandardHeaders; // ivar: _useStandardHeaders


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)isValidAnalytics;
-(BOOL)searchMatchesItem:(id)arg0 inSection:(NSInteger)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)alternateSearchKeyForSection:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)headerTextForSection:(NSInteger)arg0 ;
-(id)init;
-(id)itemForIndexPath:(id)arg0 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didFocusItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnfocusItemAtIndexPath:(id)arg1 ;
-(void)dismissViewController:(id)arg0 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)setupCollectionView:(id)arg0 ;
-(void)showViewController:(id)arg0 popoverSourceView:(id)arg1 ;


@end


#endif