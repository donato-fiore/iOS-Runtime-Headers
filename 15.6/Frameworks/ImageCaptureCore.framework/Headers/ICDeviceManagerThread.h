// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICEMANAGERTHREAD_H
#define ICDEVICEMANAGERTHREAD_H

@class NSThread;



@interface ICDeviceManagerThread : NSThread



+(void)runBlock:(id)arg0 ;
-(void)main;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 waitUntilDone:(unk)arg1  ;


@end


#endif