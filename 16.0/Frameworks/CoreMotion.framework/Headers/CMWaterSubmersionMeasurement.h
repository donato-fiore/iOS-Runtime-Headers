// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMWATERSUBMERSIONMEASUREMENT_H
#define CMWATERSUBMERSIONMEASUREMENT_H

@class NSDate, NSMeasurement;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWaterSubmersionMeasurement : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSMeasurement *depth; // ivar: _depth
@property (readonly, nonatomic) NSMeasurement *pressure; // ivar: _pressure
@property (readonly, nonatomic) NSInteger submersionState; // ivar: _submersionState
@property (readonly, nonatomic) NSMeasurement *surfacePressure; // ivar: _surfacePressure


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDepth:(id)arg0 andPressure:(id)arg1 andSurfacePressure:(id)arg2 andState:(NSInteger)arg3 andDate:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif