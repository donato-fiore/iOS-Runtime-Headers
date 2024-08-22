// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DNSDATA2DDATABUFFER_H
#define TSCH3DNSDATA2DDATABUFFER_H

@class NSData, NSMutableData;


#import "TSCH3D2DDataBuffer.h"

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *_constData;
    NSMutableData *_mutableData;
}


@property (readonly, nonatomic) NSData *NSData;


+(id)bufferWithCapacityDimension:(*void)arg0 data:(id)arg1 ;
+(id)bufferWithCapacityDimension:(*void)arg0 mutableData:(id)arg1 ;
-(*void)data;
-(*void)mutableData;
-(NSUInteger)componentByteSize;
-(NSUInteger)count;
-(id)initWithCapacityDimension:(*void)arg0 ;
-(id)initWithCapacityDimension:(*void)arg0 data:(id)arg1 ;
-(id)initWithCapacityDimension:(*void)arg0 mutableData:(id)arg1 ;
-(int)componentType;
-(void)fillCapacity;
-(void)resizeFillDimension:(*void)arg0 ;


@end


#endif