// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREBROWSEREQUEST_H
#define MPMODELSTOREBROWSEREQUEST_H

@class NSURL;


#import "MPStoreModelRequest.h"
#import "MPModelStoreBrowseResponse.h"

@interface MPModelStoreBrowseRequest : MPStoreModelRequest

@property (nonatomic) NSInteger additionalContent; // ivar: _additionalContent
@property (nonatomic) NSInteger domain; // ivar: _domain
@property (nonatomic) NSInteger filteringPolicy; // ivar: _filteringPolicy
@property (nonatomic) BOOL flattenRadioList;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL; // ivar: _loadAdditionalContentURL
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // ivar: _previousResponse
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // ivar: _previousRetrievedNestedResponse
@property (nonatomic) NSInteger requestEndpoint; // ivar: _requestEndpoint
@property (nonatomic) NSInteger subscriptionStatus; // ivar: _subscriptionStatus


+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)configureWithParentSection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif