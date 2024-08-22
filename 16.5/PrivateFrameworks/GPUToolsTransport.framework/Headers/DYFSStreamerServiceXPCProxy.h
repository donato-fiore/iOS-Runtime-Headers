// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYFSSTREAMERSERVICEXPCPROXY_H
#define DYFSSTREAMERSERVICEXPCPROXY_H

@class NSSet;
@protocol DYFSStreamerService, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface DYFSStreamerServiceXPCProxy : NSObject <DYFSStreamerService>

 {
    id<GTXPCConnection> *_connection;
    NSSet *_ignoreMethods;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)finishedSending;
-(void)initializeTransfer;
-(void)itemData:(id)arg0 attributes:(id)arg1 ;
-(void)streamAbort;


@end


#endif