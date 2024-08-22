// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSPENDINGSUMMARYPRESENTER_H
#define PKSPENDINGSUMMARYPRESENTER_H

@class UIImage, NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKSpendingSummaryView.h"

@interface PKSpendingSummaryPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKSpendingSummaryView *_sampleView;
    UIImage *_upImage;
    UIImage *_downImage;
    BOOL _needsSizing;
    CGSize _summarySize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)init;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureView:(id)arg0 item:(id)arg1 presentationStyle:(NSUInteger)arg2 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)swapSummaryInCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif