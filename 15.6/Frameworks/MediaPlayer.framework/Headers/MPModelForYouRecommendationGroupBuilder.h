// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELFORYOURECOMMENDATIONGROUPBUILDER_H
#define MPMODELFORYOURECOMMENDATIONGROUPBUILDER_H

@class NSDateFormatter, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPModelForYouRecommendationItemBuilder.h"
#import "MPMutableSectionedCollection.h"
#import "MPPropertySet.h"

@interface MPModelForYouRecommendationGroupBuilder : NSObject {
    ? _requestedGroupProperties;
    MPModelForYouRecommendationItemBuilder *_itemBuilder;
    NSDateFormatter *_lastUpdatedDateFormatter;
}


@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // ivar: _flatSectionedItems
@property (readonly, nonatomic) MPPropertySet *requestedGroupPropertySet; // ivar: _requestedGroupPropertySet
@property (readonly, nonatomic) MPPropertySet *requestedItemPropertySet; // ivar: _requestedItemPropertySet
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults; // ivar: _storeItemMetadataResults


+(id)allSupportedGroupProperties;
+(id)allSupportedItemProperties;
-(id)initWithRequestedGroupPropertySet:(id)arg0 requestedItemPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 ;
-(id)modelObjectForRecommendationDictionary:(id)arg0 userIdentity:(id)arg1 ;


@end


#endif