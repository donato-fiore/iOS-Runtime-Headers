// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSLOCATIONCHANGEDTRIGGER_H
#define MAPSSUGGESTIONSLOCATIONCHANGEDTRIGGER_H

@class CLLocation, NSString;
@protocol MapsSuggestionsLocationUpdaterDelegate, MapsSuggestionsLocationUpdater;


#import "MapsSuggestionsBaseTrigger.h"
#import "MapsSuggestionsCanKicker.h"

@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate>

 {
    CLLocation *_previousLocation;
    CGFloat _minDistance;
    id<MapsSuggestionsLocationUpdater> *_locationUpdater;
    MapsSuggestionsCanKicker *_locationForceUpdate;
    CGFloat _locationForceUpdateTime;
    id<MapsSuggestionsLocationUpdater> *_forcingLocationUpdater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithLocationUpdater:(id)arg0 ;
-(id)initWithLocationUpdater:(id)arg0 forcingLocationUpdater:(id)arg1 ;
-(void)_forceLocationUpdate;
-(void)changeMinDistance:(CGFloat)arg0 ;
-(void)didAddFirstObserver;
-(void)didLoseLocationPermission;
-(void)didRemoveLastObserver;
-(void)didUpdateLocation:(id)arg0 ;
-(void)restartWithUpdateTime:(CGFloat)arg0 ;
-(void)startWithMinimumDistance:(CGFloat)arg0 ;
-(void)startWithMinimumUpdateTime:(CGFloat)arg0 minimumDistance:(CGFloat)arg1 ;
-(void)stop;


@end


#endif