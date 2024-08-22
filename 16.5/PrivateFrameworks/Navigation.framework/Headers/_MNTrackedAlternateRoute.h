// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MNTRACKEDALTERNATEROUTE_H
#define _MNTRACKEDALTERNATEROUTE_H


#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"

@interface _MNTrackedAlternateRoute : NSObject

@property (retain, nonatomic) MNActiveRouteInfo *alternateRoute; // ivar: _alternateRoute
@property (nonatomic) ? divergenceCoordinate; // ivar: _divergenceCoordinate
@property (retain, nonatomic) MNActiveRouteInfo *mainRoute; // ivar: _mainRoute




@end


#endif