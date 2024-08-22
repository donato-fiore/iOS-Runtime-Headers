// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE35EXTERNALREQUESTTIMELINERELOADFILTER_H
#define _TTC10CHRONOCORE35EXTERNALREQUESTTIMELINERELOADFILTER_H

@class SwiftObject;



@interface _TtC10ChronoCore35ExternalRequestTimelineReloadFilter : SwiftObject {
    ? throttleIntervalInSeconds;
    ? coalesceLeewayInSeconds;
    ? timelineService;
    ? _lock;
    ? _lock_processMonitor;
    ? _lock_mapForegroundContainerProcessesToRequestInfo;
    ? _lock_timer;
}






@end


#endif