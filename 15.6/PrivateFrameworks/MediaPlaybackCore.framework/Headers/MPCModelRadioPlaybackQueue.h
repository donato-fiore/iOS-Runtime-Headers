// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELRADIOPLAYBACKQUEUE_H
#define MPCMODELRADIOPLAYBACKQUEUE_H

@class ICRadioPlaybackHistoryStore, ICStoreRequestContext, ICRadioPlaybackHistory, MPModelRadioStation, MPSectionedCollection;

#import <Foundation/Foundation.h>

#import "_MPCModelRadioPlaybackQueueStationTracksCollection.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"

@interface MPCModelRadioPlaybackQueue : NSObject {
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;
    ICStoreRequestContext *_storeRequestContext;
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;
}


@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, copy, nonatomic) ICRadioPlaybackHistory *playbackHistory;
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
-(void)savePlaybackHistoryWithUpdates:(id)arg0 ;
// -(void)savePlaybackHistoryWithUpdates:(id)arg0 completionHandler:(unk)arg1  ;
-(void)updateWithPersonalizedResponse:(id)arg0 ;


@end


#endif