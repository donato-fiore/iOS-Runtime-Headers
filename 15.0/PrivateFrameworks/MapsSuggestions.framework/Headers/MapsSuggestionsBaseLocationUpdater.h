// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBASELOCATIONUPDATER_H
#define MAPSSUGGESTIONSBASELOCATIONUPDATER_H

@class NSString;
@protocol MapsSuggestionsLocationUpdater;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>

 {
    NSString *_name;
    Queue _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)hasObservers;
-(NSUInteger)countLocationObservers;
-(id)dispatchQueue;
-(id)initWithName:(id)arg0 queue:(id)arg1 ;
-(id)restartLocationUpdatesForDelegate:(id)arg0 ;
-(id)startLocationUpdatesForDelegate:(id)arg0 ;
-(void)awaitQueue;
-(void)considerMyAllowanceAsLimited:(BOOL)arg0 ;
-(void)considerMyNewLocation:(id)arg0 ;
-(void)considerMyNewVisit:(id)arg0 ;
-(void)dealloc;
-(void)onStartImplementation;
-(void)onStopImplementation;
-(void)stopLocationUpdatesForDelegate:(id)arg0 ;


@end


#endif