// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPSSUGGESTIONSPREDICTOR_H
#define MKMAPSSUGGESTIONSPREDICTOR_H

@class NSXPCConnection, NSString;
@protocol MKMapsSuggestionsPredictor, OS_dispatch_queue, OS_dispatch_source, MKMapsSuggestionsSignalPackCacheInterface;

#import <Foundation/Foundation.h>


@interface MKMapsSuggestionsPredictor : NSObject <MKMapsSuggestionsPredictor>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MKMapsSuggestionsSignalPackCacheInterface> *signalPackCacheInterface; // ivar: _signalPackCacheInterface
@property (readonly) Class superclass;


+(id)sharedPredictor;
-(BOOL)_openConnectionIfNecessary;
-(BOOL)transportModeForDestinationEntryData:(id)arg0 originCoordinateData:(id)arg1 handler:(id)arg2 ;
-(BOOL)transportModeForDestinationMapItemData:(id)arg0 originCoordinateData:(id)arg1 handler:(id)arg2 ;
-(id)NSDataToMKMapsSuggestionsTransportModes:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_closeConnection;
-(void)_initCloseTimerIfNecessary;
-(void)_scheduleCloseConnection;
-(void)_unscheduleCloseConnection;
-(void)dealloc;


@end


#endif