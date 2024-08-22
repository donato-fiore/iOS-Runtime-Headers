// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESUMEROUTEHANDLE_H
#define GEORESUMEROUTEHANDLE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOOriginalWaypointRoute.h"

@interface GEOResumeRouteHandle : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEOOriginalWaypointRoute *routeGeometry; // ivar: _routeGeometry
@property (retain, nonatomic) NSData *serverSessionState; // ivar: _serverSessionState


+(BOOL)supportsSecureCoding;
+(id)resumeRouteHandleStorageFromResumeRouteHandle:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGEOStorageResumeRouteHandle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif