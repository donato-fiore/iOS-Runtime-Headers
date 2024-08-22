// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETSDATASOURCECONVERTER_H
#define PUASSETSDATASOURCECONVERTER_H



#import "PUTilingDataSourceConverter.h"

@interface PUAssetsDataSourceConverter : PUTilingDataSourceConverter



+(id)defaultConverter;
-(BOOL)convertIndexPath:(*id)arg0 tileKind:(*id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3 ;
-(BOOL)shouldReloadTileControllerFromAsset:(id)arg0 toAsset:(id)arg1 tileKind:(id)arg2 ;


@end


#endif