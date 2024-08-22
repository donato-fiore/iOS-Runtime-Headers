// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLHEAPDESCRIPTORINTERNAL_H
#define MTLHEAPDESCRIPTORINTERNAL_H



#import "MTLHeapDescriptor.h"

@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    *MTLHeapDescriptorPrivate _private;
}


@property (nonatomic) BOOL sparsePageAccessCountersEnabled;
@property (nonatomic) NSInteger sparsePageSize;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithDevice:(id)arg0 ;
-(NSInteger)type;
-(NSUInteger)cpuCacheMode;
-(NSUInteger)hash;
-(NSUInteger)hazardTrackingMode;
-(NSUInteger)pinnedGPUAddress;
-(NSUInteger)protectionOptions;
-(NSUInteger)resourceOptions;
-(NSUInteger)size;
-(NSUInteger)storageMode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(struct MTLHeapDescriptorPrivate *)descriptorPrivate;
-(void)dealloc;
-(void)setCpuCacheMode:(NSUInteger)arg0 ;
-(void)setHazardTrackingMode:(NSUInteger)arg0 ;
-(void)setPinnedGPUAddress:(NSUInteger)arg0 ;
-(void)setProtectionOptions:(NSUInteger)arg0 ;
-(void)setResourceOptions:(NSUInteger)arg0 ;
-(void)setSize:(NSUInteger)arg0 ;
-(void)setStorageMode:(NSUInteger)arg0 ;
-(void)setType:(NSInteger)arg0 ;


@end


#endif