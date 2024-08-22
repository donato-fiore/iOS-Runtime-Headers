// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMENTIONSUGGESTIONVIEW_H
#define CKMENTIONSUGGESTIONVIEW_H

@class UIView, UICollectionView, NSString, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout;
@protocol UICollectionViewDelegate, UIGestureRecognizerDelegate, CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate;



@interface CKMentionSuggestionView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) NSObject<CKMentionSuggestionViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMentionSuggestionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (nonatomic) BOOL hasCompletedInitialLayoutPass; // ivar: _hasCompletedInitialLayoutPass
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *suggestionViewLayout; // ivar: _suggestionViewLayout
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)suggestionsLayout;
-(id)suggestionsLayoutSectionForEnvironment:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)suggestionsDidChange;


@end


#endif