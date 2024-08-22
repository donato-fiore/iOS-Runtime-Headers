// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEHYPOTHESISVALUE_H
#define GEOROUTEHYPOTHESISVALUE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEORouteHypothesis.h"
#import "GEOComposedWaypoint.h"
#import "GEORouteHypothesisMonitor.h"
#import "GEORouteAttributes.h"
#import "GEOMapServiceTraits.h"

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (retain, nonatomic) GEORouteHypothesis *currentHypothesis; // ivar: _currentHypothesis
@property (readonly, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isStaleToPurgeFromDisk;
@property (readonly, nonatomic) BOOL isStaleToRefresh;
@property (readonly, nonatomic) GEORouteHypothesisMonitor *monitor; // ivar: _monitor
@property (readonly, nonatomic) GEOComposedWaypoint *origin; // ivar: _origin
@property (nonatomic) BOOL prediction; // ivar: _prediction
@property (copy, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (nonatomic) NSInteger rowId; // ivar: _rowId
@property (readonly, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (nonatomic) CGFloat updatedTimeStamp; // ivar: _updatedTimeStamp
@property (nonatomic) CGFloat valueRefreshTimeStamp; // ivar: _valueRefreshTimeStamp


+(BOOL)supportsSecureCoding;
-(BOOL)aggresiveArrivalIsAfterExpiration;
-(BOOL)canBePersistedToDisk;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 toDestination:(id)arg1 arrivalDate:(id)arg2 expirationDate:(id)arg3 traceName:(id)arg4 traits:(id)arg5 routeAttributes:(id)arg6 clientInfo:(id)arg7 ;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif