// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADVIVISUALSEARCHGATINGREQUEST_H
#define MADVIVISUALSEARCHGATINGREQUEST_H

@class NSString, NSNumber, NSURL, CLLocation;


#import "MADRequest.h"

@interface MADVIVisualSearchGatingRequest : MADRequest

@property (copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSNumber *imageType; // ivar: _imageType
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSNumber *queryID; // ivar: _queryID
@property (copy, nonatomic) NSURL *referralURL; // ivar: _referralURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif