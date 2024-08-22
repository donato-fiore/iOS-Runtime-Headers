// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAGINATEDWEBSERVICERESPONSE_H
#define PKPAGINATEDWEBSERVICERESPONSE_H

@class NSNumber, NSArray;


#import "PKWebServiceResponse.h"

@interface PKPaginatedWebServiceResponse : PKWebServiceResponse

@property (readonly, nonatomic) NSNumber *pageOffset; // ivar: _pageOffset
@property (readonly, nonatomic) NSArray *rawDataList; // ivar: _rawDataList
@property (readonly, nonatomic) NSNumber *totalPageCount; // ivar: _totalPageCount


+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif