// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCMODELRADIOPLAYBACKQUEUESTATIONTRACKSCOLLECTION_H
#define _MPCMODELRADIOPLAYBACKQUEUESTATIONTRACKSCOLLECTION_H

@class NSHashTable, MPPropertySet, ICMutableRadioPlaybackHistory, MPSectionedCollection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCPlaybackRequestEnvironment.h"
#import "MPCModelGenericAVItemUserIdentityPropertySet.h"

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}


@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet; // ivar: _identityPropertySet
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
@property (readonly, copy, nonatomic) MPSectionedCollection *trackModels; // ivar: _trackModels
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks; // ivar: _tracks


-(BOOL)isExplicitItemAtIndex:(NSInteger)arg0 ;
-(NSInteger)removeExplicitItems;
-(id)AVItemAtIndex:(NSInteger)arg0 ;
-(id)initWithPlaybackContext:(id)arg0 ;
-(id)trackForItemAtIndex:(NSInteger)arg0 ;
-(void)updateWithPersonalizedResponse:(id)arg0 ;


@end


#endif