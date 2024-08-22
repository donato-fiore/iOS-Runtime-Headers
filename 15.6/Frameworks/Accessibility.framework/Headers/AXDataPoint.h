// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXDATAPOINT_H
#define AXDATAPOINT_H

@class NSArray, NSAttributedString, NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXDataPointValue.h"

@interface AXDataPoint : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *additionalValues; // ivar: _additionalValues
@property (copy, nonatomic) NSAttributedString *attributedLabel; // ivar: _attributedLabel
@property (copy, nonatomic) NSString *categoryEncodingValue; // ivar: _categoryEncodingValue
@property (copy, nonatomic) NSNumber *durationEncodingValue; // ivar: _durationEncodingValue
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *pitchEncodingValue; // ivar: _pitchEncodingValue
@property (copy, nonatomic) NSNumber *timeEncodingValue; // ivar: _timeEncodingValue
@property (copy, nonatomic) NSString *valueDescription; // ivar: _valueDescription
@property (copy, nonatomic) NSNumber *volumeEncodingValue; // ivar: _volumeEncodingValue
@property (copy, nonatomic) AXDataPointValue *xValue; // ivar: _xValue
@property (copy, nonatomic) AXDataPointValue *yValue; // ivar: _yValue


-(id)_additionalCategoricalValue;
-(id)_additionalNumericValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithX:(id)arg0 y:(id)arg1 ;
-(id)initWithX:(id)arg0 y:(id)arg1 additionalValues:(id)arg2 ;
-(id)initWithX:(id)arg0 y:(id)arg1 additionalValues:(id)arg2 label:(id)arg3 ;


@end


#endif