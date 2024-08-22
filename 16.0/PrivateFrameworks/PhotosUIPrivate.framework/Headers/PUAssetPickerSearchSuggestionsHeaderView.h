// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETPICKERSEARCHSUGGESTIONSHEADERVIEW_H
#define PUASSETPICKERSEARCHSUGGESTIONSHEADERVIEW_H

@class UIView, UICollectionView, NSString;
@protocol UICollectionViewDelegate, SearchSuggestionsCollectionViewLayoutUpdatesDelegate, PUAssetPickerSearchSuggestionsSelectionDelegate;



@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate, SearchSuggestionsCollectionViewLayoutUpdatesDelegate>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUAssetPickerSearchSuggestionsSelectionDelegate> *suggestionsSelectionDelegate; // ivar: _suggestionsSelectionDelegate
@property (readonly) Class superclass;


-(id)initWithCollectionView:(id)arg0 dataSource:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didInvalidateLayout:(id)arg0 ;


@end


#endif