// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKREFERENCERANGEVIEWDATA_H
#define HKREFERENCERANGEVIEWDATA_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKReferenceRangeViewData : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *rangeHigh; // ivar: _rangeHigh
@property (copy, nonatomic) NSString *rangeHighString; // ivar: _rangeHighString
@property (copy, nonatomic) NSNumber *rangeLow; // ivar: _rangeLow
@property (copy, nonatomic) NSString *rangeLowString; // ivar: _rangeLowString
@property (copy, nonatomic) NSString *unitString; // ivar: _unitString
@property (nonatomic) BOOL useOutOfRangeValueColor; // ivar: _useOutOfRangeValueColor
@property (copy, nonatomic) NSNumber *value; // ivar: _value
@property (copy, nonatomic) NSString *valueString; // ivar: _valueString


+(id)_codedQuantityForValue:(id)arg0 ;
+(id)_codedQuantityForValueCollection:(id)arg0 ;
+(id)referenceRangeViewDataFromInspectableValueInRange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif