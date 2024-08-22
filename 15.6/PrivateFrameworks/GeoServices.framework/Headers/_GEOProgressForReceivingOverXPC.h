// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOPROGRESSFORRECEIVINGOVERXPC_H
#define _GEOPROGRESSFORRECEIVINGOVERXPC_H

@class NSProgress;
@protocol OS_xpc_object, OS_dispatch_queue;



@interface _GEOProgressForReceivingOverXPC : NSProgress {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initVendingEndpoint:(*id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif