// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYREUSABLEDISPLAYASSET_H
#define PXSTORYREUSABLEDISPLAYASSET_H

@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXStoryResourcesDataSource.h"

@interface PXStoryReusableDisplayAsset : NSObject {
    id<PXDisplayAsset> *_displayAsset;
}


@property (readonly, nonatomic) NSInteger resourceIndex; // ivar: _resourceIndex
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource


-(id)displayAsset;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(void)configureWithDisplayResourceIndex:(NSInteger)arg0 resourcesDataSource:(id)arg1 ;


@end


#endif