// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17COREODIESSENTIALS20ODINFHARDWAREMONITOR_H
#define _TTC17COREODIESSENTIALS20ODINFHARDWAREMONITOR_H

@protocol NFHardwareEventListener;

#import <Foundation/Foundation.h>


@interface _TtC17CoreODIEssentials20ODINFHardwareMonitor : NSObject <NFHardwareEventListener>

 {
    ? continuation;
    ? dispatchQueue;
}




-(id)init;
-(void)hardwareStateDidChange;


@end


#endif