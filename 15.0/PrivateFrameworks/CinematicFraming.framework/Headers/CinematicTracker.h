// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CINEMATICTRACKER_H
#define CINEMATICTRACKER_H

@class NSMutableDictionary, NSArray;
@protocol CinematicTrackerDelegate;

#import <Foundation/Foundation.h>

#import "CinematicFramingSessionOptions.h"

@interface CinematicTracker : NSObject {
    NSMutableArray" _allTracks;
    NSMutableArray" _tracksOidMappings;
    NSMutableDictionary *_oidToTrackMap;
    NSUInteger _trackIndexCounter;
}


@property (weak, nonatomic) NSObject<CinematicTrackerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CinematicFramingSessionOptions *options; // ivar: _options
@property (readonly, nonatomic) NSArray *tracks;


-(id)init;
-(void)processDetections:(id)arg0 ofType:(NSInteger)arg1 atTime:(struct ? )arg2 ;
-(void)processInput:(id)arg0 inView:(struct CGRect )arg1 ;
-(void)removeTrackOfType:(NSInteger)arg0 atIndex:(int)arg1 atTime:(struct ? )arg2 ;
-(void)updateBodyFacePairsAtTime:(struct ? )arg0 ;


@end


#endif