// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSREALFLIGHTREQUESTER_H
#define MAPSSUGGESTIONSREALFLIGHTREQUESTER_H

@class NSString;
@protocol MapsSuggestionsFlightRequester;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRealFlightRequester : NSObject <MapsSuggestionsFlightRequester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)requestFlightsWithFullFlightNumber:(id)arg0 departureDate:(id)arg1 handler:(id)arg2 ;


@end


#endif