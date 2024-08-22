// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELFORYOURECOMMENDATIONITEMBUILDER_H
#define MPMODELFORYOURECOMMENDATIONITEMBUILDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MPModelStoreBrowseContentItemBuilder.h"
#import "MPModelForYouRecommendationGroupBuilder.h"
#import "MPMutableSectionedCollection.h"
#import "MPPropertySet.h"

@interface MPModelForYouRecommendationItemBuilder : NSObject {
    ? _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationGroupBuilder *_subgroupBuilder;
}


@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // ivar: _flatSectionedItems
@property (readonly, nonatomic) MPPropertySet *requestedPropertySet; // ivar: _requestedPropertySet
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults; // ivar: _storeItemMetadataResults


+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg0 storeItemMetadataResults:(id)arg1 flatSectionedItems:(id)arg2 ;
-(id)modelObjectForRecommendationChildDictionary:(id)arg0 parentGroup:(id)arg1 subgroupsAccumulator:(id)arg2 userIdentity:(id)arg3 ;


@end


#endif