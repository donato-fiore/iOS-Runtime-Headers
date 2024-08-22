// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYSEARCHREQUEST_H
#define MPMODELLIBRARYSEARCHREQUEST_H

@class NSArray, NSString;


#import "MPModelLibraryRequest.h"

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest

@property (nonatomic) NSInteger maximumResultsPerScope; // ivar: _maximumResultsPerScope
@property (copy, nonatomic) NSArray *scopes; // ivar: _scopes
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif