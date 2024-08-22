// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCOUNTERSAMPLEBUFFERDESCRIPTORINTERNAL_H
#define MTLCOUNTERSAMPLEBUFFERDESCRIPTORINTERNAL_H

@class NSString;
@protocol NSCopying, MTLCounterSet;


#import "MTLCounterSampleBufferDescriptor.h"

@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor <NSCopying>

 {
    id<MTLCounterSet> *_counterSet;
    NSUInteger _storageMode;
    NSString *_label;
    NSUInteger _sampleCount;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)sampleCount;
-(NSUInteger)storageMode;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)counterSet;
-(id)label;
-(void)dealloc;
-(void)setCounterSet:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setSampleCount:(NSUInteger)arg0 ;
-(void)setStorageMode:(NSUInteger)arg0 ;


@end


#endif