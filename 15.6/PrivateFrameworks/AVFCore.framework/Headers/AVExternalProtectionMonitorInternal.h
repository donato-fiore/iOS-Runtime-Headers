// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEXTERNALPROTECTIONMONITORINTERNAL_H
#define AVEXTERNALPROTECTIONMONITORINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVExternalProtectionMonitor.h"

@interface AVExternalProtectionMonitorInternal : NSObject {
    *OpaqueFigCPEProtector _protector;
    AVExternalProtectionMonitor *_publicMonitor;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif