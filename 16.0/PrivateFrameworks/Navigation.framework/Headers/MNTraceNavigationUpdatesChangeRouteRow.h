// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACENAVIGATIONUPDATESCHANGEROUTEROW_H
#define MNTRACENAVIGATIONUPDATESCHANGEROUTEROW_H

@class NSData;


#import "MNTraceNavigationUpdatesRow.h"

@interface MNTraceNavigationUpdatesChangeRouteRow : MNTraceNavigationUpdatesRow

@property (retain, nonatomic) NSData *directionsResponseID; // ivar: _directionsResponseID
@property (retain, nonatomic) NSData *etauResponseID; // ivar: _etauResponseID
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (nonatomic) NSUInteger routeIndex; // ivar: _routeIndex


-(NSInteger)navigationUpdateType;


@end


#endif