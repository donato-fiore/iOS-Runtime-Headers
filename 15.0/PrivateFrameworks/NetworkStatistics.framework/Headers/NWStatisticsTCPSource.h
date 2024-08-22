// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWSTATISTICSTCPSOURCE_H
#define NWSTATISTICSTCPSOURCE_H



#import "NWStatisticsSource.h"

@interface NWStatisticsTCPSource : NWStatisticsSource {
    nstat_tcp_descriptor _descriptor;
    NSUInteger _eventFlags;
}




-(id)_currentSnapshot;
-(id)description;
-(id)initWithManager:(id)arg0 local:(struct sockaddr *)arg1 remote:(struct sockaddr *)arg2 ;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;


@end


#endif