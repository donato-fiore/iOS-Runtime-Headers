// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRACEPREVIOUSROUTEPROFILEEXTENSION_H
#define HDRACEPREVIOUSROUTEPROFILEEXTENSION_H

@class NSString;
@protocol HDProfileExtension;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDRaceRouteClusterManager.h"

@interface HDRacePreviousRouteProfileExtension : NSObject <HDProfileExtension>

 {
    HDProfile *_profile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDRaceRouteClusterManager *raceRouteClusterManager; // ivar: _raceRouteClusterManager
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;


@end


#endif