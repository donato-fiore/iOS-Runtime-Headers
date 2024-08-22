// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKRELATIVEDATEPROGRESSPROVIDER_H
#define CLKRELATIVEDATEPROGRESSPROVIDER_H

@class NSDate;


#import "CLKProgressProvider.h"

@interface CLKRelativeDateProgressProvider : CLKProgressProvider

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)relativeDateProgressProviderWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)_needsUpdates;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_progressFractionForNow:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_validate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif