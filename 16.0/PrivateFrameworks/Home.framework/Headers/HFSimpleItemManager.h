// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSIMPLEITEMMANAGER_H
#define HFSIMPLEITEMMANAGER_H



#import "HFItemManager.h"

@interface HFSimpleItemManager : HFItemManager

@property (copy, nonatomic) id *homeCreator; // ivar: _homeCreator
@property (copy, nonatomic) id *itemComparator; // ivar: _itemComparator
@property (copy, nonatomic) id *itemModuleCreator; // ivar: _itemModuleCreator
@property (copy, nonatomic) id *itemProviderCreator; // ivar: _itemProviderCreator
@property (nonatomic) BOOL shouldDisableOptionalDataDuringFastInitialUpdate; // ivar: _shouldDisableOptionalDataDuringFastInitialUpdate


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_comparatorForSectionIdentifier:(SEL)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 itemProvidersCreator:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 itemProvidersCreator:(id)arg2 ;


@end


#endif