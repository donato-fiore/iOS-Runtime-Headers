// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATIDSSOCKET_H
#define ATIDSSOCKET_H

@class ATSocket, IDSDeviceConnection, IDSDevice;


#import "ATIDSService.h"

@interface ATIDSSocket : ATSocket {
    IDSDeviceConnection *_deviceConnection;
    unsigned int _wifiWriteBufferSize;
    unsigned int _btWriteBufferSize;
}


@property (readonly, nonatomic) IDSDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) ATIDSService *service; // ivar: _service


-(BOOL)open;
-(id)initWithDevice:(id)arg0 service:(id)arg1 priority:(NSInteger)arg2 ;
-(void)addTransportUpgradeException;
-(void)closeDescriptor;
-(void)connectWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)removeTransportUpgradeException;


@end


#endif