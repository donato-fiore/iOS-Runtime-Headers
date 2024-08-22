// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSROUTESNAPSHOT_H
#define NWSROUTESNAPSHOT_H

@class NSData;


#import "NWSSnapshot.h"

@interface NWSRouteSnapshot : NWSSnapshot {
    NSData *_destination;
    NSData *_mask;
    NSData *_gateway;
    nstat_route_descriptor _descriptor;
}


@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;
@property (readonly) NSData *destination;
@property (readonly) unsigned int flags;
@property (readonly) NSData *gateway;
@property (readonly) NSUInteger gatewayID;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) NSData *mask;
@property (readonly) NSUInteger parentID;
@property (readonly) NSUInteger routeID;
@property (readonly) CGFloat rttAverage;
@property (readonly) CGFloat rttMinimum;
@property (readonly) CGFloat rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;


-(id)description;
-(id)initWithCounts:(struct nstat_counts *)arg0 routeDescriptor:(struct nstat_route_descriptor *)arg1 sourceIdent:(NSUInteger)arg2 seqno:(NSUInteger)arg3 ;
-(id)traditionalDictionary;
-(void)_initWithDescriptor:(struct nstat_route_descriptor *)arg0 ;


@end


#endif