// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCOMPANIONTIMELINEREQUESTCONFIGURATION_H
#define PXSTORYCOMPANIONTIMELINEREQUESTCONFIGURATION_H

@class PHAssetCollection;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryCompanionTimelineRequestConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger songsProducerKind; // ivar: _songsProducerKind
@property (nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 viewportSize:(struct CGSize )arg1 ;


@end


#endif