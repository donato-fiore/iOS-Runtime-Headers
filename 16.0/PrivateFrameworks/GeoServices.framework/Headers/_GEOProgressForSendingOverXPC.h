// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOPROGRESSFORSENDINGOVERXPC_H
#define _GEOPROGRESSFORSENDINGOVERXPC_H

@class GEOMirroredProgress, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;



@interface _GEOProgressForSendingOverXPC : GEOMirroredProgress {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remoteConnections;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint; // ivar: _endpoint


-(id)initWithMirroredProgress:(id)arg0 ;
-(id)initWithMirroredProgress:(id)arg0 endpoint:(id)arg1 ;
-(void)_broadcastOverXPCConnections:(id)arg0 ;
-(void)_connectionDidInvalidate;
-(void)_update;
-(void)cancel;
-(void)dealloc;


@end


#endif