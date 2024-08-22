// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELFORYOURECOMMENDATIONSREQUEST_H
#define MPMODELFORYOURECOMMENDATIONSREQUEST_H

@class NSURL;


#import "MPStoreModelRequest.h"

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *customForYouURL; // ivar: _customForYouURL
@property (nonatomic) NSInteger displayFilterKinds; // ivar: _displayFilterKinds
@property (nonatomic) NSInteger filteringPolicy; // ivar: _filteringPolicy
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL refreshRequest; // ivar: _refreshRequest
@property (nonatomic) NSInteger requestEndpoint; // ivar: _requestEndpoint
@property (nonatomic) NSInteger types; // ivar: _types
@property (nonatomic) BOOL withPlainEditorialNotes; // ivar: _withPlainEditorialNotes
@property (nonatomic) BOOL withRecentlyPlayed; // ivar: _withRecentlyPlayed
@property (nonatomic) BOOL withSocial; // ivar: _withSocial


+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif