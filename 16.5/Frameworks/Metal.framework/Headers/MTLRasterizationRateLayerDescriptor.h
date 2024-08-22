// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLRASTERIZATIONRATELAYERDESCRIPTOR_H
#define MTLRASTERIZATIONRATELAYERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLRasterizationRateSampleArray.h"

@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) MTLRasterizationRateSampleArray *horizontal;
@property (readonly, nonatomic) *float horizontalSampleStorage;
@property (readonly, nonatomic) ? maxSampleCount;
@property (nonatomic) ? sampleCount;
@property (readonly, nonatomic) MTLRasterizationRateSampleArray *vertical;
@property (readonly, nonatomic) *float verticalSampleStorage;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSampleCount:(struct ? )arg0 ;
-(id)initWithSampleCount:(struct ? )arg0 horizontal:(*float)arg1 vertical:(*float)arg2 ;


@end


#endif