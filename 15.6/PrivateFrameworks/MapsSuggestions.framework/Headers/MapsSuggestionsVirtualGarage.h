// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSVIRTUALGARAGE_H
#define MAPSSUGGESTIONSVIRTUALGARAGE_H

@class NSString;
@protocol MapsSuggestionsVirtualGarageConnectorDelegate, MapsSuggestionsVirtualGarageConnector, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate>

 {
    id<MapsSuggestionsVirtualGarageConnector> *_connector;
    MapsSuggestionsObservers *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnectedToVG;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)entriesForUnpairedVehiclesWithHandler:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 ;
-(id)initWithConnector:(id)arg0 ;
-(void)closeConnection;
-(void)openConnection;
-(void)registerObserver:(id)arg0 ;
-(void)stateOfChargeForVehicleWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)virtualGarageDidUpdateUnpairedVehicles:(id)arg0 ;


@end


#endif