// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RETIMEINTERVALCONTENTPROVIDER_H
#define RETIMEINTERVALCONTENTPROVIDER_H

@class NSDate, NSTimeZone;


#import "RETextContentProvider.h"

@interface RETimeIntervalContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)timeIntervalContentProviderWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif