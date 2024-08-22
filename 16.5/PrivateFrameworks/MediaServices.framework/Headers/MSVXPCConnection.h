// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVXPCCONNECTION_H
#define MSVXPCCONNECTION_H

@class NSXPCConnection;



@interface MSVXPCConnection : NSXPCConnection



+(void)registerLocalListener:(id)arg0 withServiceName:(id)arg1 ;
+(void)unregisterLocalListerWithName:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithServiceName:(id)arg0 ;


@end


#endif