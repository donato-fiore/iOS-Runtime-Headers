// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWSTATISTICSINTERFACESOURCE_H
#define NWSTATISTICSINTERFACESOURCE_H



#import "NWStatisticsSource.h"

@interface NWStatisticsInterfaceSource : NWStatisticsSource {
    nstat_ifnet_descriptor _descriptor;
}




-(id)_currentSnapshot;
-(id)description;
-(id)initWithManager:(id)arg0 interface:(NSInteger)arg1 threshold:(NSInteger)arg2 ;
-(int)handleDescriptor:(*void)arg0 length:(NSUInteger)arg1 events:(NSUInteger)arg2 ;


@end


#endif