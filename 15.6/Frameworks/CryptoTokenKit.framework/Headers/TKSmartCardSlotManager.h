// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSMARTCARDSLOTMANAGER_H
#define TKSMARTCARDSLOTMANAGER_H

@class NSXPCConnection, NSMutableDictionary, NSArray;
@protocol TKProtocolSlotClientNotification, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification>

 {
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
    id *_connectionToServer;
    int _notifyToken;
}


@property (readonly) NSArray *slotNames;


+(id)defaultManager;
-(BOOL)setupConnection;
-(id)init;
-(id)initWithServer:(id)arg0 ;
-(id)slotNamed:(id)arg0 ;
-(void)dealloc;
-(void)getSlotWithName:(id)arg0 reply:(id)arg1 ;
-(void)setSlotWithName:(id)arg0 endpoint:(id)arg1 type:(id)arg2 reply:(id)arg3 ;


@end


#endif