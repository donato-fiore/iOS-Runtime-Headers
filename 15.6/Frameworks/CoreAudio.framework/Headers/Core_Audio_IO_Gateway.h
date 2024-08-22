// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CORE_AUDIO_IO_GATEWAY_H
#define CORE_AUDIO_IO_GATEWAY_H

@class Gateway;
@protocol Core_Audio_IO;



@interface Core_Audio_IO_Gateway : Gateway <Core_Audio_IO>



@property (nonatomic) shared_ptr<Client_Side_IO_Gateway> client_gateway; // ivar: _client_gateway


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)handle_io_message:(struct Device_Token )arg0 with:(id)arg1 reply:(id)arg2 ;
-(void)handle_server_disconnected;
-(void)start_after_io_device_change:(unsigned int)arg0 reply:(id)arg1 ;
-(void)stop_before_io_device_change:(unsigned int)arg0 reply:(id)arg1 ;


@end


#endif