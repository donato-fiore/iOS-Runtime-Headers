// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAGINATEDWEBSERVICERESPONSE_H
#define PKPAGINATEDWEBSERVICERESPONSE_H

@class NSDate, NSArray;


#import "PKWebServiceResponse.h"

@interface PKPaginatedWebServiceResponse : PKWebServiceResponse

@property (readonly, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly, nonatomic) BOOL moreComing; // ivar: _moreComing
@property (readonly, nonatomic) NSArray *rawDataList; // ivar: _rawDataList


+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif