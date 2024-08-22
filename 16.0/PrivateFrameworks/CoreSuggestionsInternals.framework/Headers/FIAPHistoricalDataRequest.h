// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIAPHISTORICALDATAREQUEST_H
#define FIAPHISTORICALDATAREQUEST_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *personHandle; // ivar: _personHandle
@property (readonly, nonatomic) NSString *pluginIdentifier; // ivar: _pluginIdentifier
@property (readonly, nonatomic) NSUInteger requestId; // ivar: _requestId
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)historicalDataRequestWithPersonHandle:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistoricalDataRequest:(id)arg0 ;
-(BOOL)subsetOfHistoricalDataRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonHandle:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithRequestId:(NSUInteger)arg0 pluginIdentifier:(id)arg1 personHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif