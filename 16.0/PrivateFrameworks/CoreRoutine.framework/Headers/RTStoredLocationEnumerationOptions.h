// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTSTOREDLOCATIONENUMERATIONOPTIONS_H
#define RTSTOREDLOCATIONENUMERATIONOPTIONS_H

@class CLLocation, NSDateInterval;
@protocol NSCopying;


#import "RTEnumerationOptions.h"

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying>



@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (copy, nonatomic) CLLocation *boundingBoxLocation; // ivar: _boundingBoxLocation
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) BOOL downsampleRequired; // ivar: _downsampleRequired
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat smoothingErrorThreshold; // ivar: _smoothingErrorThreshold
@property (nonatomic) BOOL smoothingRequired; // ivar: _smoothingRequired
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(Class)enumeratedType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 boundingBoxLocation:(id)arg3 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 boundingBoxLocation:(id)arg3 type:(int)arg4 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 boundingBoxLocation:(id)arg3 type:(int)arg4 downsampleRequired:(BOOL)arg5 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 boundingBoxLocation:(id)arg3 type:(int)arg4 downsampleRequired:(BOOL)arg5 smoothingErrorThreshold:(CGFloat)arg6 ;
-(id)initWithDateInterval:(id)arg0 horizontalAccuracy:(CGFloat)arg1 batchSize:(NSUInteger)arg2 boundingBoxLocation:(id)arg3 type:(int)arg4 smoothingRequired:(BOOL)arg5 downsampleRequired:(BOOL)arg6 smoothingErrorThreshold:(CGFloat)arg7 ;
-(id)processingBlock:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif