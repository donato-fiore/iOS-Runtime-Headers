// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARFLIGHTSEARCHREQUEST_H
#define PARFLIGHTSEARCHREQUEST_H

@class NSString, NSDate;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *flightQuery; // ivar: _flightQuery


+(BOOL)supportsSecureCoding;
-(Class)responseClass;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif