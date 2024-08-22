// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRPROCESSMONITOR_H
#define BRPROCESSMONITOR_H


#import <Foundation/Foundation.h>


@interface BRProcessMonitor : NSObject {
    id *_monitor;
}




-(BOOL)_isProcessForeground:(id)arg0 bundleID:(id)arg1 ;
-(id)_bundleIDForPID:(int)arg0 ;
-(id)initForProcessID:(int)arg0 observer:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif