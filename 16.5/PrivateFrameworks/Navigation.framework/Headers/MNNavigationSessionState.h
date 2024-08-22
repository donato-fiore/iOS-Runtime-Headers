// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNNAVIGATIONSESSIONSTATE_H
#define MNNAVIGATIONSESSIONSTATE_H

@class NSArray, GEOComposedWaypoint;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"
#import "MNLocation.h"

@interface MNNavigationSessionState : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *alternateRouteInfos; // ivar: _alternateRouteInfos
@property (retain, nonatomic) MNActiveRouteInfo *currentRouteInfo; // ivar: _currentRouteInfo
@property (retain, nonatomic) GEOComposedWaypoint *currentWaypoint; // ivar: _currentWaypoint
@property (retain, nonatomic) MNLocation *location; // ivar: _location
@property (nonatomic) NSUInteger targetLegIndex; // ivar: _targetLegIndex


-(id)_locationStateAsString:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocation:(id)arg0 currentRouteInfo:(id)arg1 alternateRouteInfos:(id)arg2 targetLegIndex:(NSUInteger)arg3 ;


@end


#endif