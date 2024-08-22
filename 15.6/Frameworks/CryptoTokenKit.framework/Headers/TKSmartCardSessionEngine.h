// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKSMARTCARDSESSIONENGINE_H
#define TKSMARTCARDSESSIONENGINE_H

@class NSXPCConnection;
@protocol TKProtocolSmartCardSession;

#import <Foundation/Foundation.h>

#import "TKSmartCardSlotEngine.h"

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>

 {
    TKSmartCardSlotEngine *_slot;
    BOOL _transmitting;
}


@property BOOL active; // ivar: _active
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property NSInteger endPolicy; // ivar: _endPolicy
@property BOOL valid; // ivar: _valid


-(id)initWithSlot:(id)arg0 connection:(id)arg1 ;
-(void)dealloc;
-(void)setSessionEndPolicy:(NSInteger)arg0 ;
-(void)terminateWithReply:(id)arg0 ;
-(void)transmit:(id)arg0 reply:(id)arg1 ;


@end


#endif