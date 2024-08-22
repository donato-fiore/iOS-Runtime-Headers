// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSSQLCORECONNECTIONOBSERVER_H
#define _NSSQLCORECONNECTIONOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSSQLCore.h"

@interface _NSSQLCoreConnectionObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSSQLCore *_core;
}




-(void)dealloc;


@end


#endif