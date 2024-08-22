// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXZOOMABLEINLINEHEADERSECTIONINFOMETADATASTORE_H
#define PXZOOMABLEINLINEHEADERSECTIONINFOMETADATASTORE_H


#import <Foundation/Foundation.h>

#import "PXAssetsDataSource.h"

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {
    ? _sectionInfosByLevel;
    NSInteger _sectionsCountByLevel;
    NSInteger _sectionsCapacityByLevel;
}


@property (readonly, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource


-(BOOL)updateWithDataSourceAfterChanges:(id)arg0 changeDetails:(id)arg1 ;
-(NSInteger)numberOfSectionInfosForLevel:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDataSource:(id)arg0 ;
-(struct ? *)sectionInfosForLevel:(NSUInteger)arg0 ;
-(void)_resizeStorageIfNeededForNumberOfSections:(NSInteger)arg0 level:(NSUInteger)arg1 ;
-(void)addSectionInfo:(struct ? )arg0 forLevel:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)resetSectionInfos;


@end


#endif