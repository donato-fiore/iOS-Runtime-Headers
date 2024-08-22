// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGIPHYVIEWCONTROLLER_H
#define WFGIPHYVIEWCONTROLLER_H

@class UIViewController, UICollectionView, UICollectionViewFlowLayout, NSString, UIView, NSArray, WFGiphySessionManager;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate, WFGiphyViewControllerDelegate;



@interface WFGiphyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate>



@property (readonly, weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFGiphyViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UIView *emptyListView; // ivar: _emptyListView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, nonatomic) BOOL selectMultiple; // ivar: _selectMultiple
@property (readonly, nonatomic) WFGiphySessionManager *sessionManager; // ivar: _sessionManager
@property (readonly) Class superclass;


-(BOOL)accessibilityPerformEscape;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithQuery:(id)arg0 selectMultiple:(BOOL)arg1 ;
-(void)cancel;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)done;
-(void)loadView;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)updateResults;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif