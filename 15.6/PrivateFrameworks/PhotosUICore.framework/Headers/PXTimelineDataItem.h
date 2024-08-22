// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTIMELINEDATAITEM_H
#define PXTIMELINEDATAITEM_H

@class PHAssetCollection;

#import <Foundation/Foundation.h>

#import "PXTimelineCrop.h"

@interface PXTimelineDataItem : NSObject

@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) PXTimelineCrop *suggestedCrop; // ivar: _suggestedCrop


-(id)initWithAssetCollection:(id)arg0 suggestedCrop:(id)arg1 ;


@end


#endif