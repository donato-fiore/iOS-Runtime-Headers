// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETPICKERSEARCHSUGGESTIONSCOLLECTIONVIEWLAYOUT_H
#define PUASSETPICKERSEARCHSUGGESTIONSCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewCompositionalLayout;
@protocol SearchSuggestionsCollectionViewLayoutUpdatesDelegate;



@interface PUAssetPickerSearchSuggestionsCollectionViewLayout : UICollectionViewCompositionalLayout

@property (weak, nonatomic) NSObject<SearchSuggestionsCollectionViewLayoutUpdatesDelegate> *layoutUpdatesDelegate; // ivar: _layoutUpdatesDelegate


-(void)invalidateLayout;


@end


#endif