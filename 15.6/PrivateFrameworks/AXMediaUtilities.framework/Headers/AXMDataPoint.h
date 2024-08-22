// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMDATAPOINT_H
#define AXMDATAPOINT_H

@class NSArray, NSAttributedString, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AXMDataPointValue.h"

@interface AXMDataPoint : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *additionalValues; // ivar: _additionalValues
@property (copy, nonatomic) NSAttributedString *attributedLabel; // ivar: _attributedLabel
@property (copy, nonatomic) NSNumber *durationEncodingValue; // ivar: _durationEncodingValue
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *pitchEncodingValue; // ivar: _pitchEncodingValue
@property (nonatomic) CGFloat playbackTimeOffsetMS; // ivar: _playbackTimeOffsetMS
@property (copy, nonatomic) NSString *timbreEncodingValue; // ivar: _timbreEncodingValue
@property (copy, nonatomic) AXMDataPointValue *timeEncodingValue; // ivar: _timeEncodingValue
@property (copy, nonatomic) NSString *valueDescription; // ivar: _valueDescription
@property (copy, nonatomic) NSNumber *volumeEncodingValue; // ivar: _volumeEncodingValue
@property (copy, nonatomic) AXMDataPointValue *xValue; // ivar: _xValue
@property (copy, nonatomic) AXMDataPointValue *yValue; // ivar: _yValue
@property (readonly, nonatomic) AXMDataPointValue *zCategoryAxisValue;
@property (readonly, nonatomic) AXMDataPointValue *zNumericAxisValue;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithX:(id)arg0 y:(id)arg1 ;
-(id)initWithX:(id)arg0 y:(id)arg1 additionalValues:(id)arg2 ;
-(id)initWithX:(id)arg0 y:(id)arg1 additionalValues:(id)arg2 label:(id)arg3 ;


@end


#endif