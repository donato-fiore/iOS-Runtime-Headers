// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFORYOUSUGGESTIONSASSETSDATASOURCE_H
#define PXFORYOUSUGGESTIONSASSETSDATASOURCE_H

@class NSArray;
@protocol PXDisplayAssetCollection;


#import "PXAssetsDataSource.h"

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {
    id<PXDisplayAssetCollection> *_collection;
}


@property (copy, nonatomic) NSArray *assets; // ivar: _assets


+(id)new;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithDisplayAssets:(id)arg0 collection:(id)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForAssetReference:(id)arg0 ;


@end


#endif