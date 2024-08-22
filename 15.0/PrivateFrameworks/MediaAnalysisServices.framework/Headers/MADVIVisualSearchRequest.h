// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADVIVISUALSEARCHREQUEST_H
#define MADVIVISUALSEARCHREQUEST_H

@class NSArray, NSData, NSString, NSNumber, NSURL, CLLocation;


#import "MADRequest.h"

@interface MADVIVisualSearchRequest : MADRequest {
    NSArray *_gatingResultItems;
    NSData *_gatingPayload;
    NSArray *_documentObservations;
}


@property (readonly, nonatomic) NSArray *documentObservations;
@property (copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly, nonatomic) NSData *gatingPayload;
@property (readonly, nonatomic) NSArray *gatingResultItems;
@property (copy, nonatomic) NSNumber *imageType; // ivar: _imageType
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (copy, nonatomic) NSNumber *queryID; // ivar: _queryID
@property (copy, nonatomic) NSURL *referralURL; // ivar: _referralURL
@property (copy, nonatomic) NSNumber *uiScale; // ivar: _uiScale


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGatingResultItems:(id)arg0 andPayload:(id)arg1 ;
-(id)initWithGatingResultItems:(id)arg0 payload:(id)arg1 documentObservations:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif