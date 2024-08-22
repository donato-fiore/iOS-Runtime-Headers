// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NW_LISTENER_INBOX_PROTOCOL_H
#define NW_LISTENER_INBOX_PROTOCOL_H

@class inbox;



@interface nw_listener_inbox_protocol : inbox {
    nw_listen_protocol_callbacks _listen_callbacks;
    ? _listen_protocol;
}




-(BOOL)cancel;
-(id)description;


@end


#endif