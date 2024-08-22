// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KERNELEVENTMONITOR_H
#define KERNELEVENTMONITOR_H

@class NSString;
@protocol ConfigurableObjectProtocol, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol>

 {
    NSString *_symptomName;
    int _nativeSocket;
    int _nativeSocket6;
    NSObject<OS_dispatch_source> *_kernelNotificationSource;
    NSObject<OS_dispatch_source> *_kernelNotificationSource6;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_handleNetworkEvent:(struct kern_event_msg *)arg0 ;
-(void)_handleSocket:(int)arg0 ;
-(void)initListening;


@end


#endif