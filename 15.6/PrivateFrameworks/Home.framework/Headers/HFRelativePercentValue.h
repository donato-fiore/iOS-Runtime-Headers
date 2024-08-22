// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFRELATIVEPERCENTVALUE_H
#define HFRELATIVEPERCENTVALUE_H

@class NSString, NSNumber;
@protocol NSCopying, NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFRelativePercentValue : NSObject <NSCopying, NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (copy, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue
@property (copy, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *value; // ivar: _value


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristicReadResponse:(id)arg0 ;
-(id)initWithValue:(id)arg0 forCharacteristic:(id)arg1 ;


@end


#endif