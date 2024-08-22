// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNALTERNATEROUTESUPDATER_H
#define MNALTERNATEROUTESUPDATER_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"

@interface MNAlternateRoutesUpdater : NSObject {
    MNActiveRouteInfo *_mainRoute;
    NSArray *_alternateRoutes;
    NSMutableArray *_trackedAlternateRoutes;
}


@property (readonly, nonatomic) NSArray *alternateRoutes;


-(BOOL)updateForLocation:(id)arg0 ;
-(BOOL)updateForReroute:(id)arg0 rerouteReason:(NSUInteger)arg1 ;
-(id)alternateRouteForLocation:(id)arg0 ;


@end


#endif