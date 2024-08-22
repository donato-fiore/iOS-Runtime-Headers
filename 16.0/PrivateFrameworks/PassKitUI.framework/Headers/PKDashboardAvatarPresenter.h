// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDAVATARPRESENTER_H
#define PKDASHBOARDAVATARPRESENTER_H

@class NSString;
@protocol PKDashboardItemPresenter;

#import <Foundation/Foundation.h>

#import "PKAvatarHeaderView.h"
#import "PKContactAvatarManager.h"

@interface PKDashboardAvatarPresenter : NSObject <PKDashboardItemPresenter>

 {
    PKAvatarHeaderView *_sampleView;
    PKContactAvatarManager *_avatarManager;
    CGSize _viewSize;
    BOOL _needsSizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)itemClass;
-(id)_contactForItem:(id)arg0 ;
-(id)cellForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)initWithAvatarManager:(id)arg0 ;
-(struct CGSize )sizeForItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_configureView:(id)arg0 item:(id)arg1 ;
-(void)didSelectItem:(id)arg0 inCollectionView:(id)arg1 atIndexPath:(id)arg2 navigationController:(id)arg3 canPresent:(id)arg4 ;
-(void)swapSummaryInCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg0 toTrait:(id)arg1 inCollectionView:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif