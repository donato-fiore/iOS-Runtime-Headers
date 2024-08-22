// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSDONATER_H
#define MAPSSUGGESTIONSDONATER_H

@class NSXPCConnection, NSString;
@protocol MapsSuggestionsObject, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)donateETA:(id)arg0 entry:(id)arg1 ;
-(BOOL)donateFlightLookupWithFlightNumber:(id)arg0 departureAirportCode:(id)arg1 departureTime:(id)arg2 ;
-(BOOL)donateSignalPack:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif