// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEAPPLICATIONSRESPONSE_H
#define PKAPPLYWEBSERVICEAPPLICATIONSRESPONSE_H

@class NSArray, NSString;


#import "PKApplyWebServiceResponse.h"
#import "PKFeatureFailureCollection.h"

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse

@property (readonly, nonatomic) NSArray *allFeatureApplications; // ivar: _allFeatureApplications
@property (readonly, nonatomic) PKFeatureFailureCollection *featureFailures; // ivar: _featureFailures
@property (readonly, copy, nonatomic) NSString *lastUpdated; // ivar: _lastUpdated


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif