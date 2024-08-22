// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBPROXFILTER_H
#define CBPROXFILTER_H



#import "CBFilter.h"

@interface CBProxFilter : CBFilter {
    float _proxReleaseTime;
    BOOL _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
}


@property (nonatomic, getter=isTriggered) BOOL triggered; // ivar: _triggered


-(id)filterEvent:(id)arg0 ;
-(id)handleALSEvent:(id)arg0 ;
-(id)handleProximityEvent:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif