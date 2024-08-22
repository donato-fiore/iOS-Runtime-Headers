// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBROWSERSELECTIONSNAPSHOT_H
#define PXBROWSERSELECTIONSNAPSHOT_H

@class NSString, NSArray;
@protocol PXBrowserSelectionSnapshot;

#import <Foundation/Foundation.h>


@interface PXBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>



@property (readonly, nonatomic) NSInteger assetCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedAssetCount;
@property (readonly, nonatomic) NSInteger estimatedModelObjectsCount;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly) Class superclass;


+(id)selectionWithIndexPaths:(id)arg0 dataSource:(id)arg1 ;
-(NSInteger)indexOfAssetReference:(id)arg0 ;
-(id)assetReferenceAtIndex:(NSInteger)arg0 ;
-(id)displayAssetAtIndex:(NSInteger)arg0 ;


@end


#endif