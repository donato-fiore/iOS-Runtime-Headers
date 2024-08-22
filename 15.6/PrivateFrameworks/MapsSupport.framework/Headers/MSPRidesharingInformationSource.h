// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPRIDESHARINGINFORMATIONSOURCE_H
#define MSPRIDESHARINGINFORMATIONSOURCE_H

@class NSString, GEOComposedWaypoint;
@protocol MSPRouteInformationSource;

#import <Foundation/Foundation.h>


@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_endWaypoint) GEOComposedWaypoint *endWaypoint; // ivar: _endWaypoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_startWaypoint) GEOComposedWaypoint *startWaypoint; // ivar: _startWaypoint
@property (readonly) Class superclass;


-(id)ifGEOStorageRouteRequestStorage;
-(id)ifRidesharingInformationSource;
-(id)initWithStartWaypoint:(id)arg0 endWaypoint:(id)arg1 ;


@end


#endif