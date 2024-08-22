// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWSTATISTICSUDPSOURCE_H
#define NWSTATISTICSUDPSOURCE_H



#import "NWStatisticsSource.h"

@interface NWStatisticsUDPSource : NWStatisticsSource {
    nstat_udp_descriptor _descriptor;
    NSUInteger _eventFlags;
}




-(id)_currentSnapshot;
-(id)description;
-(id)initWithManager:(id)arg0 local:(struct sockaddr *)arg1 remote:(struct sockaddr *)arg2 ;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;


@end


#endif