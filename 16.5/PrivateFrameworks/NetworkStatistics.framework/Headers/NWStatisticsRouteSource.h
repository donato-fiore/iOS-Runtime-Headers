// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWSTATISTICSROUTESOURCE_H
#define NWSTATISTICSROUTESOURCE_H

@class NSData;


#import "NWStatisticsSource.h"

@interface NWStatisticsRouteSource : NWStatisticsSource {
    nstat_route_descriptor _descriptor;
}


@property (retain) NSData *destination; // ivar: _destination


-(id)_currentSnapshot;
-(id)description;
-(id)initWithManager:(id)arg0 destination:(struct sockaddr *)arg1 mask:(struct sockaddr *)arg2 interface:(unsigned int)arg3 ;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;


@end


#endif