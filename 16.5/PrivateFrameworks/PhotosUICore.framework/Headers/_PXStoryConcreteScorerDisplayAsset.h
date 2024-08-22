// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYCONCRETESCORERDISPLAYASSET_H
#define _PXSTORYCONCRETESCORERDISPLAYASSET_H

@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXStoryResourcesDataSource.h"

@interface _PXStoryConcreteScorerDisplayAsset : NSObject {
    PXStoryResourcesDataSource *_resourcesDataSource;
    NSInteger _resourceIndex;
    id<PXDisplayAsset> *_displayAsset;
}




-(NSInteger)resourceIndex;
-(id)displayAsset;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)resourcesDataSource;
-(void)setResourceIndex:(NSInteger)arg0 resourcesDataSource:(id)arg1 ;


@end


#endif