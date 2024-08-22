// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRIDSTRANSPORTCONNECTION_H
#define MRIDSTRANSPORTCONNECTION_H

@class NSString;
@protocol NSStreamDelegate;


#import "MRExternalDeviceTransportConnection.h"
#import "MRIDSConnectivityManager.h"

@interface MRIDSTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate>

 {
    MRIDSConnectivityManager *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(BOOL)isValid;
-(NSInteger)_idsPriorityFromPriority:(NSInteger)arg0 ;
-(NSUInteger)sendTransportData:(id)arg0 options:(id)arg1 ;
-(id)_exportDescriptorForOutputDevice:(id)arg0 endpoint:(id)arg1 remoteControl:(BOOL)arg2 ;
-(id)exportEndpoint:(id)arg0 ;
-(id)exportOutputDevice:(id)arg0 endpoint:(id)arg1 ;
-(id)initWithConnection:(id)arg0 type:(id)arg1 destination:(id)arg2 session:(id)arg3 ;
-(id)runLoop;
-(void)close;
-(void)dealloc;
-(void)ingestData:(id)arg0 ;
-(void)setRunLoop:(id)arg0 ;


@end


#endif