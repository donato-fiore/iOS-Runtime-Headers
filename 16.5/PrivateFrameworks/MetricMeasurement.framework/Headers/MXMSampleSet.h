// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMSAMPLESET_H
#define MXMSAMPLESET_H

@class NSSet, NSMutableDictionary, NSArray, NSUnit;
@protocol NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "MXMSample.h"
#import "MXMSampleSet.h"
#import "MXMSampleTag.h"
#import "MXMSampleTimeSeries.h"

@interface MXMSampleSet : NSObject <NSFastEnumeration, NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSSet *attributes;
@property (readonly, nonatomic) NSMutableDictionary *attributesMap; // ivar: _attributesMap
@property (retain) NSArray *cachedSamples; // ivar: _cachedSamples
@property (readonly, nonatomic) MXMSample *distance;
@property (readonly) *CGFloat doubleValues;
@property (readonly) *CGFloat firstDoubleValue;
@property (readonly, nonatomic) MXMSample *geoMean;
@property (nonatomic) *? index; // ivar: _index
@property (readonly) *CGFloat lastDoubleValue;
@property (readonly) NSUInteger length;
@property (readonly, nonatomic) MXMSample *max;
@property (readonly, nonatomic) MXMSample *min;
@property (readonly, nonatomic) MXMSampleSet *range;
@property (readonly, nonatomic) MXMSample *relativeStandardDeviation;
@property (readonly, copy) NSArray *samples;
@property (readonly, nonatomic) MXMSample *standardDeviation;
@property (readonly, nonatomic) MXMSample *sum;
@property (readonly) MXMSampleTag *tag; // ivar: _tag
@property (readonly, retain) MXMSampleTimeSeries *timeIndex; // ivar: _timeIndex
@property (nonatomic) *void underlyingBuffer; // ivar: _underlyingBuffer
@property (nonatomic) NSInteger underlyingBufferLength; // ivar: _underlyingBufferLength
@property (readonly) NSUnit *unit; // ivar: _unit


+(BOOL)supportsSecureCoding;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)attributeWithName:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 unit:(id)arg1 attributes:(id)arg2 ;
-(id)initWithTime:(id)arg0 tag:(id)arg1 unit:(id)arg2 attributes:(id)arg3 ;
-(id)initWithTime:(id)arg0 tag:(id)arg1 unit:(id)arg2 attributes:(id)arg3 doubleValues:(*CGFloat)arg4 length:(NSUInteger)arg5 ;
-(id)initWithTime:(id)arg0 tag:(id)arg1 unit:(id)arg2 attributes:(id)arg3 values:(*void)arg4 length:(NSUInteger)arg5 valueSize:(NSUInteger)arg6 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)sampleWithIndex:(NSUInteger)arg0 ;
-(void)_appendAttribute:(id)arg0 ;
-(void)_appendDoubleValue:(CGFloat)arg0 timestamp:(NSUInteger)arg1 ;
-(void)_appendSample:(id)arg0 ;
-(void)_appendSet:(id)arg0 ;
-(void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif