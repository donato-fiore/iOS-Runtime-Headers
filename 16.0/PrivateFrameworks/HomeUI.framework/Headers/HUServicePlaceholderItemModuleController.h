// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEPLACEHOLDERITEMMODULECONTROLLER_H
#define HUSERVICEPLACEHOLDERITEMMODULECONTROLLER_H



#import "HUItemModuleController.h"
#import "HUCollectionLayoutManager.h"

@interface HUServicePlaceholderItemModuleController : HUItemModuleController

@property (retain, nonatomic) HUCollectionLayoutManager *collectionLayoutManager; // ivar: _collectionLayoutManager


-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)initWithModule:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif