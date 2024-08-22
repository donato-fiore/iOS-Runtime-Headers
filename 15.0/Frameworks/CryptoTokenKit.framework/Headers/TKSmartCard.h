// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARD_H
#define TKSMARTCARD_H

@class NSMutableDictionary, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TKSmartCardSlot.h"

@interface TKSmartCard : NSObject {
    NSObject<OS_dispatch_queue> *_beginSessionQueue;
    BOOL _sensitive;
    BOOL _sensitiveRequired;
    BOOL _synchronous;
    id *_session;
    NSInteger _sessionCounter;
    BOOL _someoneWantsSession;
    NSInteger _sessionEndPolicy;
    NSMutableDictionary *_contexts;
    NSNumber *_reservationId;
    BOOL _useExtendedLength;
    BOOL _useCommandChaining;
    unsigned char _cla;
}


@property NSUInteger allowedProtocols; // ivar: _allowedProtocols
@property (retain) id *context;
@property NSUInteger currentProtocol; // ivar: _currentProtocol
@property BOOL sensitive;
@property (readonly, nonatomic) TKSmartCardSlot *slot; // ivar: _slot
@property BOOL valid; // ivar: _valid


+(BOOL)decodeResponse:(id)arg0 sw:(*unsigned short)arg1 appendTo:(id)arg2 error:(*id)arg3 ;
+(id)_localizedString:(id)arg0 ;
-(BOOL)beginSessionWithError:(*id)arg0 ;
-(BOOL)checkAPDUResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)inSessionWithError:(*id)arg0 executeBlock:(id)arg1 ;
-(BOOL)selectApplication:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronous;
-(BOOL)useCommandChaining;
-(BOOL)useExtendedLength;
-(NSInteger)sessionEndPolicy;
-(id)buildIns:(unsigned char)arg0 p1:(unsigned char)arg1 p2:(unsigned char)arg2 data:(id)arg3 range:(struct _NSRange )arg4 le:(id)arg5 protocol:(NSUInteger)arg6 chained:(BOOL)arg7 extended:(*BOOL)arg8 realLe:(*NSUInteger)arg9 ;
-(id)contextForKey:(id)arg0 ;
-(id)initWithSlot:(id)arg0 ;
-(id)remoteSessionWithErrorHandler:(id)arg0 ;
-(id)sendIns:(unsigned char)arg0 p1:(unsigned char)arg1 p2:(unsigned char)arg2 data:(id)arg3 le:(id)arg4 sw:(*unsigned short)arg5 error:(*id)arg6 ;
-(id)userInteractionForSecurePINChangeWithPINFormat:(id)arg0 APDU:(id)arg1 currentPINByteOffset:(NSInteger)arg2 newPINByteOffset:(NSInteger)arg3 ;
-(id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg0 APDU:(id)arg1 PINByteOffset:(NSInteger)arg2 ;
-(unsigned char)cla;
-(void)beginSessionWithReply:(id)arg0 ;
-(void)dealloc;
-(void)encodeLength:(NSUInteger)arg0 into:(id)arg1 sized:(NSInteger)arg2 ;
-(void)endSession;
-(void)endSessionWithReply:(id)arg0 ;
-(void)handleApduResponse:(id)arg0 body:(id)arg1 le:(NSUInteger)arg2 isCase4:(BOOL)arg3 error:(id)arg4 reply:(id)arg5 ;
-(void)inSlotQueueExecuteBlock:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)querySessionWithReply:(id)arg0 ;
-(void)releaseSessionWithReply:(id)arg0 ;
-(void)reserveExclusive:(BOOL)arg0 reply:(id)arg1 ;
-(void)sendIns:(unsigned char)arg0 p1:(unsigned char)arg1 p2:(unsigned char)arg2 data:(id)arg3 le:(id)arg4 reply:(id)arg5 ;
-(void)sessionRequested;
-(void)setCla:(unsigned char)arg0 ;
-(void)setSessionEndPolicy:(NSInteger)arg0 ;
-(void)setSynchronous:(BOOL)arg0 ;
-(void)setUseCommandChaining:(BOOL)arg0 ;
-(void)setUseExtendedLength:(BOOL)arg0 ;
-(void)transmitChunkedIns:(unsigned char)arg0 p1:(unsigned char)arg1 p2:(unsigned char)arg2 data:(id)arg3 fromOffset:(NSUInteger)arg4 realLe:(NSUInteger)arg5 chained:(BOOL)arg6 isCase4:(BOOL)arg7 reply:(id)arg8 ;
-(void)transmitRequest:(id)arg0 reply:(id)arg1 ;
-(void)unreserve;


@end


#endif