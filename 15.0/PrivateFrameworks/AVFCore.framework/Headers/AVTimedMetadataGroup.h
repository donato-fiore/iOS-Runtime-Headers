// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMEDMETADATAGROUP_H
#define AVTIMEDMETADATAGROUP_H

@class NSArray;
@protocol NSCopying, NSMutableCopying;


#import "AVMetadataGroup.h"
#import "AVTimedMetadataGroupInternal.h"

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying>

 {
    AVTimedMetadataGroupInternal *_priv;
}


@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) ? timeRange;
@property (readonly, nonatomic, getter=_timedMetadataGroupInternal) AVTimedMetadataGroupInternal *timedMetadataGroupInternal;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 timeRange:(struct ? )arg1 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct opaqueCMFormatDescription *)copyFormatDescription;
-(struct opaqueCMSampleBuffer *)_createSerializedRepresentationWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif