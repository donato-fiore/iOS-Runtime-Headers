// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOLLECTIONSBROWSERSELECTIONSNAPSHOT_H
#define PXCOLLECTIONSBROWSERSELECTIONSNAPSHOT_H

@class NSArray, NSString;
@protocol PXBrowserSelectionSnapshot;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>

 {
    NSArray *_indexPaths;
    PXSectionedDataSource *_dataSource;
    NSArray *_modelObjects;
}


@property (readonly, nonatomic) NSInteger assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedAssetCount;
@property (readonly, nonatomic) NSInteger estimatedModelObjectsCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly) Class superclass;


-(NSInteger)indexOfAssetReference:(id)arg0 ;
-(id)assetReferenceAtIndex:(NSInteger)arg0 ;
-(id)displayAssetAtIndex:(NSInteger)arg0 ;
-(id)initWithIndexPaths:(id)arg0 dataSource:(id)arg1 ;


@end


#endif