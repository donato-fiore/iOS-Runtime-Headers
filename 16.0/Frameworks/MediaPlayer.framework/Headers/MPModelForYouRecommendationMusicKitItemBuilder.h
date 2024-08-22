// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELFORYOURECOMMENDATIONMUSICKITITEMBUILDER_H
#define MPMODELFORYOURECOMMENDATIONMUSICKITITEMBUILDER_H

@class ICURLBag, NSDictionary;

#import <Foundation/Foundation.h>

#import "MPModelStoreBrowseContentItemBuilder.h"
#import "MPModelForYouRecommendationMusicKitGroupBuilder.h"
#import "MPMutableSectionedCollection.h"
#import "MPPropertySet.h"

@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject {
    ? _requestedItemProperties;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    MPModelForYouRecommendationMusicKitGroupBuilder *_subgroupBuilder;
    ICURLBag *_storeURLBag;
    BOOL _isListenNow;
}


@property (readonly, nonatomic) MPMutableSectionedCollection *flatSectionedItems; // ivar: _flatSectionedItems
@property (readonly, nonatomic) MPPropertySet *requestedPropertySet; // ivar: _requestedPropertySet
@property (readonly, nonatomic) NSDictionary *storeItemMetadataResults; // ivar: _storeItemMetadataResults


+(id)allSupportedProperties;
-(id)convertToStoreItemMetadataDictionary:(id)arg0 ;
-(id)initWithRequestedPropertySet:(id)arg0 storeItemMetadataResults:(id)arg1 flatSectionedItems:(id)arg2 storeURLBag:(id)arg3 isListenNow:(BOOL)arg4 ;
-(id)modelObjectForRecommendationChildDictionary:(id)arg0 parentGroup:(id)arg1 subgroupsAccumulator:(id)arg2 userIdentity:(id)arg3 ;
-(id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg0 ;


@end


#endif