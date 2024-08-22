// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXMOCKASSETSDATASOURCEBUILDER_H
#define _PXMOCKASSETSDATASOURCEBUILDER_H

@class NSMutableArray, NSArray, NSString;
@protocol PXMockDataSourceBuilder;

#import <Foundation/Foundation.h>


@interface _PXMockAssetsDataSourceBuilder : NSObject <PXMockDataSourceBuilder>

 {
    NSMutableArray *_mutableAssetsBySection;
    NSMutableArray *_mutableAssetCollections;
}


@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSArray *assetsBySection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)appendMockDisplayAssetSectionWithCount:(NSInteger)arg0 assetProperties:(id)arg1 assetCollection:(id)arg2 ;
-(void)appendMockDisplayAssetsWithCount:(NSInteger)arg0 assetProperties:(id)arg1 ;


@end


#endif