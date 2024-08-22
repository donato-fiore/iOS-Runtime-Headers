// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPAPPLEMAPSMETADATAPROVIDERSPECIALIZATION_H
#define LPAPPLEMAPSMETADATAPROVIDERSPECIALIZATION_H

@class CLGeocoder, _MKURLParser, MKPlaceCuratedCollectionRefiner, MKPlacePublisherRefiner;


#import "LPMetadataProviderSpecialization.h"
#import "LPMapMetadata.h"
#import "LPMapCollectionMetadata.h"
#import "LPMapCollectionPublisherMetadata.h"

@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    CLGeocoder *_geocoder;
    _MKURLParser *_parser;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
    LPMapCollectionPublisherMetadata *_publisherMetadata;
    MKPlaceCuratedCollectionRefiner *_curatedCollectionRefiner;
    MKPlacePublisherRefiner *_publisherRefiner;
}




+(NSUInteger)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(id)geocoder;
-(void)cancel;
-(void)complete;
-(void)completeWithCollection;
-(void)completeWithCuratedCollection;
-(void)completeWithDirections;
-(void)completeWithMapItem:(id)arg0 ;
-(void)completeWithPlacemark:(id)arg0 ;
-(void)completeWithPublisher;
-(void)completeWithSearchQuery:(id)arg0 ;
-(void)continueWithLookAroundSnapshotWithOptions:(id)arg0 ;
-(void)continueWithSnapshotOfMapItems:(id)arg0 inRegion:(struct ? )arg1 ;
-(void)continueWithSnapshotOfMapRegion:(struct ? )arg0 ;
-(void)fail;
-(void)resolveMapRegionWithCompletionHandler:(id)arg0 ;
-(void)start;


@end


#endif