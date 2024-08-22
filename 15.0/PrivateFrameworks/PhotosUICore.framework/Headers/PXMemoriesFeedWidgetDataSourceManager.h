// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESFEEDWIDGETDATASOURCEMANAGER_H
#define PXMEMORIESFEEDWIDGETDATASOURCEMANAGER_H



#import "PXMemoriesFeedDataSourceManagerBase.h"

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase

@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (nonatomic) BOOL onlyFavorites; // ivar: _onlyFavorites


-(NSUInteger)_extendedMaxCount;
-(id)_generateEntryFromMemories:(id)arg0 ;
-(id)fetchOptions;
-(void)_regenerateMemoriesWithChange:(id)arg0 ;
-(void)generateAdditionalEntriesIfPossible;
-(void)handleChangedKeyAssetsForMemories:(id)arg0 ;
-(void)handleIncrementalFetchResultChange:(id)arg0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg1 ;
-(void)handleNonIncrementalFetchResultChange:(id)arg0 ;
-(void)startGeneratingMemories;


@end


#endif