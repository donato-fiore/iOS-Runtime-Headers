// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INDATERELEVANCEPROVIDER_H
#define INDATERELEVANCEPROVIDER_H

@class NSDate;


#import "INRelevanceProvider.h"

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif