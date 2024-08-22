// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWSROUTESNAPSHOTTER_H
#define NWSROUTESNAPSHOTTER_H



#import "NWSSnapshotter.h"

@interface NWSRouteSnapshotter : NWSSnapshotter



-(id)initWithSource:(id)arg0 dest:(id)arg1 mask:(id)arg2 ifindex:(int)arg3 ;
-(id)snapshot;


@end


#endif