// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSAPPROXPERCENTILEDIGEST_H
#define BPSAPPROXPERCENTILEDIGEST_H

@class PBCodable, NSMutableArray;
@protocol BMProtoBufWrapper, NSSecureCoding;



@interface BPSApproxPercentileDigest : PBCodable <BMProtoBufWrapper, NSSecureCoding>



@property (nonatomic) float max; // ivar: _max
@property (nonatomic) NSUInteger maxCentroidCount; // ivar: _maxCentroidCount
@property (retain, nonatomic) NSMutableArray *mergedCentroids; // ivar: _mergedCentroids
@property (nonatomic) float min; // ivar: _min
@property (nonatomic) NSUInteger totalWeight; // ivar: _totalWeight
@property (nonatomic) NSUInteger unmergedBufferSize; // ivar: _unmergedBufferSize
@property (retain, nonatomic) NSMutableArray *unmergedCentroids; // ivar: _unmergedCentroids


+(BOOL)supportsSecureCoding;
-(CGFloat)quantileLimitForClusterIndex:(NSUInteger)arg0 maxCentroidCount:(NSUInteger)arg1 ;
-(CGFloat)valueAtQuantile:(CGFloat)arg0 ;
-(id)encodeAsProto;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 bufferMultiplier:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)addDigest:(id)arg0 ;
-(void)addValue:(float)arg0 ;
-(void)addValue:(float)arg0 weight:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeCentroids;


@end


#endif