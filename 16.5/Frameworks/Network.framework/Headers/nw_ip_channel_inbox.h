// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NW_IP_CHANNEL_INBOX_H
#define NW_IP_CHANNEL_INBOX_H

@class inbox;
@protocol OS_nw_path, OS_nw_path_flow, OS_nw_channel;



@interface nw_ip_channel_inbox : inbox {
    NSObject<OS_nw_path> *_path;
    NSObject<OS_nw_path_flow> *_flow;
    NSObject<OS_nw_channel> *_channel;
    nw_protocol _protocol;
    *short _local;
    unsigned int _scopeid;
    unsigned short _local_port;
    unsigned char _ip_proto;
    BOOL _bound_local_address;
}




-(BOOL)cancel;
-(id)description;


@end


#endif