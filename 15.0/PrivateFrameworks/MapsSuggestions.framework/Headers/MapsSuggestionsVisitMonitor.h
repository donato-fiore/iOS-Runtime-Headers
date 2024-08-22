// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSVISITMONITOR_H
#define MAPSSUGGESTIONSVISITMONITOR_H

@class CLVisit, NSString;
@protocol MapsSuggestionsLocationVisitUpdaterDelegate, MapsSuggestionsObject, MapsSuggestionsLocationUpdater, MapsSuggestionsCondition, MapsSuggestionsTrigger;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsVisitMonitor : NSObject <MapsSuggestionsLocationVisitUpdaterDelegate, MapsSuggestionsObject>

 {
    id<MapsSuggestionsLocationUpdater> *_locationUpdater;
    CLVisit *_latestVisit;
    BOOL _isInVisit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MapsSuggestionsCondition> *isInVisitCondition; // ivar: _isInVisitCondition
@property (readonly, nonatomic) CLVisit *latestVisit;
@property (readonly, nonatomic) NSObject<MapsSuggestionsTrigger> *onEnterTrigger; // ivar: _onEnterTrigger
@property (readonly, nonatomic) NSObject<MapsSuggestionsTrigger> *onExitTrigger; // ivar: _onExitTrigger
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)isInVisit;
-(id)initWithLocationUpdater:(id)arg0 startInVisit:(BOOL)arg1 ;
-(void)didEnterVisit:(id)arg0 ;
-(void)didLeaveVisit:(id)arg0 ;
-(void)didLoseLocationPermission;
-(void)didUpdateLocation:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif