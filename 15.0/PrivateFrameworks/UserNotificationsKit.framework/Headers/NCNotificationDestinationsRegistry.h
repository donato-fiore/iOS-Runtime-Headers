// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONDESTINATIONSREGISTRY_H
#define NCNOTIFICATIONDESTINATIONSREGISTRY_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface NCNotificationDestinationsRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeDestinations; // ivar: _activeDestinations
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSMutableDictionary *destinations; // ivar: _destinations
@property (retain, nonatomic) NSMutableDictionary *readyDestinations; // ivar: _readyDestinations
@property (readonly, nonatomic) NSArray *registeredDestinations;


-(BOOL)hasActiveDestinationsForRequest:(id)arg0 ;
-(BOOL)isRegisteredDestination:(id)arg0 ;
-(id)_destinationsForRequestDestinations:(id)arg0 inDestinationDict:(id)arg1 ;
-(id)destinationIdentifiersForRequestDestinations:(id)arg0 ;
-(id)destinationsForRequestDestinations:(id)arg0 ;
-(id)init;
-(id)readyDestinationsForRequestDestinations:(id)arg0 ;
-(void)registerDestination:(id)arg0 ;
-(void)registerDestination:(id)arg0 forIdentifier:(id)arg1 ;
-(void)setDestination:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setDestination:(id)arg0 ready:(BOOL)arg1 ;
-(void)setDestinationWithIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
-(void)unregisterDestination:(id)arg0 ;
-(void)unregisterDestinationForIdentifier:(id)arg0 ;


@end


#endif