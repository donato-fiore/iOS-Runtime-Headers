// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXZOOMABLEINLINEHEADERSDATASOURCE_H
#define PXZOOMABLEINLINEHEADERSDATASOURCE_H



#import "PXSectionedDataSource.h"
#import "PXAssetsDataSource.h"

@interface PXZoomableInlineHeadersDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic) NSInteger numberOfSections; // ivar: _numberOfSections
@property (readonly, nonatomic) *? sectionInfos; // ivar: _sectionInfos
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithAssetsDataSource:(id)arg0 level:(NSUInteger)arg1 metaDataStore:(id)arg2 ;
-(void)dealloc;


@end


#endif