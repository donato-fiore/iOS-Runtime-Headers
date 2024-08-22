// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDATASOURCESTRESSTEST_H
#define PXPHOTOSDATASOURCESTRESSTEST_H

@class NSArray, NSDictionary;


#import "PXObservable.h"
#import "PXPhotosDataSource.h"

@interface PXPhotosDataSourceStressTest : PXObservable {
    BOOL _isPrepared;
    NSArray *_categories;
    NSDictionary *_assetsByCategory;
    NSUInteger _sampleLength;
    NSUInteger _sampleIndex;
}


@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *dataSource; // ivar: _dataSource
@property (nonatomic, setter=_setDataSourceIndex:) NSUInteger dataSourceIndex; // ivar: _dataSourceIndex
@property (nonatomic) NSUInteger maximumAssetCount; // ivar: _maximumAssetCount
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval


-(id)_categoryForAsset:(id)arg0 ;
-(id)init;
-(id)mutableChangeObject;
-(void)_prepare;
-(void)_updateDataSource;


@end


#endif