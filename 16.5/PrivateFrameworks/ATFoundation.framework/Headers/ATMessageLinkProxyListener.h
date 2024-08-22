// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATMESSAGELINKPROXYLISTENER_H
#define ATMESSAGELINKPROXYLISTENER_H

@class NSXPCListener, NSString, ATMessageLink;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATMessageLink *messageLink; // ivar: _messageLink
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)endpoint;
-(id)initWithMessageLink:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif