// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSBLUETOOTHVEHICLECONNECTIONTRIGGER_H
#define MAPSSUGGESTIONSBLUETOOTHVEHICLECONNECTIONTRIGGER_H

@class NSString;
@protocol MapsSuggestionsTriggerObserver;


#import "MapsSuggestionsBaseTrigger.h"
#import "MapsSuggestionsDarwinNotificationTrigger.h"

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver>

 {
    BOOL _onExit;
    BOOL _onConnect;
    BOOL _onDisconnect;
    MapsSuggestionsDarwinNotificationTrigger *_btDisconnectTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btExitTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btConnectTrigger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initFireOnConnect:(BOOL)arg0 disconnect:(BOOL)arg1 exit:(BOOL)arg2 ;
-(void)dealloc;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)triggerFired:(id)arg0 ;


@end


#endif