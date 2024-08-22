// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSPROXIMITYBOOSTER_H
#define _PSPROXIMITYBOOSTER_H

@class RPPeopleDiscovery;

#import <Foundation/Foundation.h>


@interface _PSProximityBooster : NSObject

@property (retain, nonatomic) RPPeopleDiscovery *peopleDiscovery; // ivar: _peopleDiscovery


-(id)init;
-(id)suggestionsByBoostingNearbySuggestions:(id)arg0 ;
-(void)startMonitoringProximity;
-(void)stopMonitoringProximity;


@end


#endif