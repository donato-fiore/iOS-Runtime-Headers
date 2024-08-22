// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETVARIATIONSDATASOURCE_H
#define PXASSETVARIATIONSDATASOURCE_H

@class PHAsset, NSArray;


#import "PXSectionedDataSource.h"

@interface PXAssetVariationsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, copy, nonatomic) NSArray *variations; // ivar: _variations


+(id)emptyDataSource;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithVariations:(id)arg0 asset:(id)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif