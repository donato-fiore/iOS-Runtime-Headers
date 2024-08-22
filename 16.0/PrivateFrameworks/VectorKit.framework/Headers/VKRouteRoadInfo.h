// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKROUTEROADINFO_H
#define VKROUTEROADINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VKRouteRoadInfo : NSObject

@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (readonly, retain, nonatomic) NSString *shieldGroup; // ivar: _shieldGroup


-(id)initWithName:(id)arg0 shieldGroup:(id)arg1 offset:(struct PolylineCoordinate )arg2 ;


@end


#endif