// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSPREDICTOR_H
#define MAPSSUGGESTIONSPREDICTOR_H

@class NSXPCConnection, NSString;
@protocol MapsSuggestionsPredictor, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsSignalPackCache.h"

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsSignalPackCache *_signalPackCache;
    int _tempPredictedTransportMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(id)sharedPredictor;
-(BOOL)predictedTransportModeForDestinationEntry:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 handler:(id)arg2 ;
-(BOOL)predictedTransportModeForDestinationMapItem:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 handler:(id)arg2 ;
-(id)init;
-(void)cancelCapturingAnalytics;
-(void)captureActualTransportationMode:(int)arg0 originMapItem:(id)arg1 destinationMapItem:(id)arg2 ;
-(void)capturePredictedTransportationMode:(int)arg0 ;
-(void)dealloc;
-(void)storeSignalPack:(id)arg0 forMapItem:(id)arg1 andEntry:(id)arg2 ;


@end


#endif