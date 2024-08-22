// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTOCKREQUEST_H
#define SASTOCKREQUEST_H

@class NSDate, NSString;


#import "SADomainObject.h"

@interface SAStockRequest : SADomainObject

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSDate *startDate;


+(id)request;
+(id)requestWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif