// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORESPEECHPACKET_H
#define SIRICORESPEECHPACKET_H

@class NSString, NSArray;
@protocol SiriCoreThunking, SiriCoreSessionObject;

#import <Foundation/Foundation.h>


@interface SiriCoreSpeechPacket : NSObject <SiriCoreThunking, SiriCoreSessionObject>



@property (copy, nonatomic) NSString *aceId; // ivar: _aceId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger packetNumber; // ivar: _packetNumber
@property (retain, nonatomic) NSArray *packets; // ivar: _packets
@property (copy, nonatomic) NSString *refId; // ivar: _refId
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isProvisional;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_supportedByLocalSession;
-(BOOL)siriCore_supportedByRemoteLimitedSession;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)siriCore_requestId;
-(id)siriCore_serializedAceDataError:(*id)arg0 ;
-(void)siriCore_invokeThunk;
-(void)siriCore_logDiagnostics;
-(void)siriCore_setSessionRequestId:(id)arg0 ;


@end


#endif