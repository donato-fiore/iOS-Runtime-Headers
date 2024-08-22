// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLADJUSTMENTVIRTUALRESOURCE_H
#define PLADJUSTMENTVIRTUALRESOURCE_H

@class NSNumber;


#import "PLVirtualResource.h"

@interface PLAdjustmentVirtualResource : PLVirtualResource

@property (copy, nonatomic) NSNumber *cachedDataLength; // ivar: _cachedDataLength
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock


-(NSInteger)dataLength;
-(NSInteger)estimatedDataLength;
-(id)adjustmentDictionary;
-(id)initWithAdjustmentFilePath:(id)arg0 forAsset:(id)arg1 ;


@end


#endif