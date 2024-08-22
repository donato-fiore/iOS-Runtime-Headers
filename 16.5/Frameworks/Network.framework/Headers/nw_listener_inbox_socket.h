// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NW_LISTENER_INBOX_SOCKET_H
#define NW_LISTENER_INBOX_SOCKET_H

@class inbox;
@protocol OS_nw_fd_wrapper;



@interface nw_listener_inbox_socket : inbox {
    *void _source;
    NSObject<OS_nw_fd_wrapper> *_sockfd_wrapper_for_connection_group_only;
    int _sockfd_for_logging_only_do_not_close_or_use;
    int _sockfd_from_client;
    unsigned char _ipProtocol;
    unsigned char _listenUUID;
}




-(BOOL)cancel;
-(BOOL)resume;
-(BOOL)suspend;
-(id)description;
-(id)initWithParameters:(id)arg0 delegate:(id)arg1 ;
-(id)start;


@end


#endif