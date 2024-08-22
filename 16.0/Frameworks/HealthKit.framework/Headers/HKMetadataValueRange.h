// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMETADATAVALUERANGE_H
#define HKMETADATAVALUERANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKMetadataValueRange : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *maxValue; // ivar: _maxValue
@property (readonly, copy, nonatomic) id *minValue; // ivar: _minValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMinValue:(id)arg0 maxValue:(id)arg1 ;


@end


#endif