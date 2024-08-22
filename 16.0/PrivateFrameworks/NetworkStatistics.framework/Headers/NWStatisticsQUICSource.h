// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSTATISTICSQUICSOURCE_H
#define NWSTATISTICSQUICSOURCE_H



#import "NWStatisticsSource.h"

@interface NWStatisticsQUICSource : NWStatisticsSource {
    nstat_tcp_descriptor _descriptor;
    NSUInteger _eventFlags;
}




-(id)_currentSnapshot;
-(id)description;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;


@end


#endif