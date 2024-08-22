// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARDSLOT_H
#define TKSMARTCARDSLOT_H

@class NSXPCConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TKSmartCardATR.h"
#import "TKSmartCardSlotProxy.h"

@interface TKSmartCardSlot : NSObject {
    NSXPCConnection *_connection;
}


@property (retain) TKSmartCardATR *ATR; // ivar: _ATR
@property (readonly, nonatomic) NSInteger maxInputLength; // ivar: _maxInputLength
@property (readonly, nonatomic) NSInteger maxOutputLength; // ivar: _maxOutputLength
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property NSInteger powerState; // ivar: _powerState
@property NSInteger previousState; // ivar: _previousState
@property (readonly, nonatomic) TKSmartCardSlotProxy *proxy; // ivar: _proxy
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property BOOL securePINChangeSupported; // ivar: _securePINChangeSupported
@property BOOL securePINVerificationSupported; // ivar: _securePINVerificationSupported
@property NSInteger shareState; // ivar: _shareState
@property NSInteger state; // ivar: _state


-(id)description;
-(id)initWithEndpoint:(id)arg0 error:(*id)arg1 ;
-(id)makeSmartCard;
-(id)screen;
-(id)synchronous:(BOOL)arg0 remoteSlotWithErrorHandler:(id)arg1 ;
-(id)userInteractionForConfirmation;
-(id)userInteractionForStringEntry;
-(void)connectToEndpoint:(id)arg0 synchronous:(BOOL)arg1 reply:(id)arg2 ;
-(void)control:(id)arg0 data:(id)arg1 expectedLength:(unsigned int)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)getAttrib:(unsigned int)arg0 reply:(id)arg1 ;
-(void)invalidate;
-(void)setAttrib:(unsigned int)arg0 data:(id)arg1 reply:(id)arg2 ;


@end


#endif