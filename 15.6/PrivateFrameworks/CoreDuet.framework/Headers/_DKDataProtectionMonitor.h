// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKDATAPROTECTIONMONITOR_H
#define _DKDATAPROTECTIONMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DKDataProtectionMonitor : NSObject {
    NSMutableDictionary *_handlers;
    BOOL _deviceFormatedForContentProtection;
    NSMutableDictionary *_availableState;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    BOOL _notifyEnabled;
}




-(id)init;
-(void)dealloc;


@end


#endif