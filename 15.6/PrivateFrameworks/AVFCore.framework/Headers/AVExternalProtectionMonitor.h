// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEXTERNALPROTECTIONMONITOR_H
#define AVEXTERNALPROTECTIONMONITOR_H


#import <Foundation/Foundation.h>

#import "AVExternalProtectionMonitorInternal.h"

@interface AVExternalProtectionMonitor : NSObject {
    AVExternalProtectionMonitorInternal *_monitor;
}


@property (readonly, nonatomic) NSInteger externalProtectionState;


-(id)init;
-(void)dealloc;


@end


#endif