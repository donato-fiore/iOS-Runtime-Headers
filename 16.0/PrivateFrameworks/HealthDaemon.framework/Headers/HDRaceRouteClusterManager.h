// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDRACEROUTECLUSTERMANAGER_H
#define HDRACEROUTECLUSTERMANAGER_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDRaceRouteClusterManager : NSObject {
    HDProfile *_profile;
}




-(BOOL)generateRaceRouteClustersWithLimit:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)raceRouteClustersForActivityType:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif