// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPORTMESSAGE_H
#define NSPORTMESSAGE_H

@class NSPort, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface NSPortMessage : NSObject {
    NSPort *localPort;
    NSPort *remotePort;
    NSMutableArray *components;
    unsigned int msgid;
    *void reserved2;
    *void reserved;
}


@property (readonly, copy) NSArray *components;
@property unsigned int msgid;
@property (readonly, retain) NSPort *receivePort;
@property (readonly, retain) NSPort *sendPort;


-(BOOL)sendBeforeDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReceivePort:(id)arg0 sendPort:(id)arg1 components:(id)arg2 ;
-(id)initWithSendPort:(id)arg0 receivePort:(id)arg1 components:(id)arg2 ;
-(void)dealloc;


@end


#endif