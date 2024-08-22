// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDFAVORITEDISPLAYTYPESCONTROLLER_H
#define WDFAVORITEDISPLAYTYPESCONTROLLER_H

@class HKObserverSet, NSMutableSet, HKHealthStore;

#import <Foundation/Foundation.h>

#import "WDUserDefaults.h"

@interface WDFavoriteDisplayTypesController : NSObject {
    HKObserverSet *_observers;
    NSMutableSet *_favoritedDisplayTypes;
    BOOL _cycleTrackingSummaryFavorited;
    BOOL _shouldPersistChanges;
    NSInteger _state;
    WDUserDefaults *_userDefaults;
}


@property (readonly, nonatomic) BOOL hasLoadedInitialState;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL shouldRecoverFromErrors; // ivar: _shouldRecoverFromErrors


+(NSInteger)cycleTrackingSummaryFavoritedIdentifier;
-(BOOL)_needsFetch;
-(BOOL)cycleTrackingSummaryIsFavorited;
-(BOOL)displayTypeIsFavorited:(id)arg0 ;
-(id)_displayTypeIdentifiersFromDisplayTypes:(id)arg0 ;
-(id)favoritedDisplayTypes;
-(id)initWithWDUserDefaults:(id)arg0 healthStore:(id)arg1 shouldPersistChanges:(BOOL)arg2 ;
-(void)_alertObserversControllerReady;
-(void)_alertObserversDidFail;
-(void)_alertObserversDidSuccessfullyPersist;
-(void)_alertObserversDidUpdate;
-(void)_fetchUserDefaultsIfNecessary;
-(void)_handleFetchError:(id)arg0 ;
-(void)_handleFetchSuccess:(id)arg0 ;
-(void)_persistFavoritedDisplayTypes;
-(void)_recoverFromFailureStateIfNecessary;
-(void)fetchFavorites;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeAllFavorites;
-(void)setCycleTrackingSummaryFavorited:(BOOL)arg0 ;
-(void)setIsFavorited:(BOOL)arg0 displayType:(id)arg1 ;
-(void)setIsFavorited:(BOOL)arg0 displayTypes:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)userHasUpdatedFavortiesWithCompletion:(id)arg0 ;
-(void)userUpdatedFavorites;


@end


#endif