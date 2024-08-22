// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACETILECOLLECTIONVIEWCELL_H
#define MUPLACETILECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView<MUPlaceTileTemplateView>, NSString, UIImageView;
@protocol MUPlaceTileTemplateView, MUPlaceTileViewModel;


#import "MUPlaceTileCellConfiguration.h"

@interface MUPlaceTileCollectionViewCell : UICollectionViewCell <MUPlaceTileTemplateView>

 {
    UIView<MUPlaceTileTemplateView> *_tileContentView;
}


@property (nonatomic) MUPlaceTileCellConfiguration *cellConfiguration; // ivar: _cellConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *tileImageView;
@property (retain, nonatomic) NSObject<MUPlaceTileViewModel> *viewModel;


+(id)reuseIdentifier;
+(struct CGSize )preferredSizeForViewModels:(id)arg0 cellConfiguration:(id)arg1 ;
-(void)_updateTemplateViewWithOldCellConfiguration:(id)arg0 ;


@end


#endif