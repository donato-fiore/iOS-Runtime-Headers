// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSAGGREGATEDVALUE_H
#define CLSAGGREGATEDVALUE_H

@protocol NSSecureCoding, NSCopying;


#import "CLSReportItem.h"

@interface CLSAggregatedValue : CLSReportItem <NSSecureCoding, NSCopying>



@property (nonatomic) int aggregateType; // ivar: _aggregateType
@property (readonly, nonatomic) CGFloat normalized;
@property (nonatomic) NSInteger totalSampleCount; // ivar: _totalSampleCount
@property (nonatomic) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)scalarMultiply:(CGFloat)arg0 ;


@end


#endif