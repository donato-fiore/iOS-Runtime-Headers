// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAPEOPLEDISCOVERYSERVICE_H
#define FAPEOPLEDISCOVERYSERVICE_H

@class RPPeopleDiscovery, NSString;
@protocol FAPeopleDiscoveryServiceProtocol;

#import <Foundation/Foundation.h>


@interface FAPeopleDiscoveryService : NSObject <FAPeopleDiscoveryServiceProtocol>

 {
    RPPeopleDiscovery *_peopleDiscovery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getNearbyPeople;
-(id)init;
-(void)dealloc;
-(void)startMonitoringProximity;
-(void)stopMonitoringProximity;


@end


#endif