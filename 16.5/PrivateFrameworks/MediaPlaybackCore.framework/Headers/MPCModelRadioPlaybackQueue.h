// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCMODELRADIOPLAYBACKQUEUE_H
#define MPCMODELRADIOPLAYBACKQUEUE_H

@class ICStoreRequestContext, MPModelRadioStation, MPSectionedCollection;

#import <Foundation/Foundation.h>

#import "_MPCModelRadioPlaybackQueueStationTracksCollection.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"

@interface MPCModelRadioPlaybackQueue : NSObject {
    ICStoreRequestContext *_storeRequestContext;
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;
}


@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (retain, nonatomic) MPModelRadioStation *radioStation; // ivar: _radioStation
@property (readonly, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, nonatomic) MPSectionedCollection *tracks;


-(BOOL)isExplicitItemAtIndex:(NSInteger)arg0 ;
-(NSInteger)removeExplicitItems;
-(id)AVItemAtIndex:(NSInteger)arg0 ;
-(id)initWithPlaybackContext:(id)arg0 ;
-(id)trackForItemAtIndex:(NSInteger)arg0 ;
-(id)tracksByApplyingTracksResponse:(id)arg0 currentIndex:(NSInteger)arg1 ;
-(void)removeAllItems;
-(void)updateWithPersonalizedResponse:(id)arg0 ;


@end


#endif