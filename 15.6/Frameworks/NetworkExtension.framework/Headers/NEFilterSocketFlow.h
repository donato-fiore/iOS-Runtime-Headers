// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERSOCKETFLOW_H
#define NEFILTERSOCKETFLOW_H

@class NSUUID, NWEndpoint, NSString;
@protocol NSSecureCoding, NSCopying;


#import "NEFilterFlow.h"

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying>

 {
    NSInteger _generateIdentifierOnce;
}


@property (copy, nonatomic) NSUUID *euuid; // ivar: _euuid
@property (copy) NWEndpoint *localEndpoint; // ivar: _localEndpoint
@property (copy) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint
@property (copy) NSString *remoteHostname; // ivar: _remoteHostname
@property int socketFamily; // ivar: _socketFamily
@property NSUInteger socketID; // ivar: _socketID
@property int socketProtocol; // ivar: _socketProtocol
@property int socketType; // ivar: _socketType
@property (readonly) NSUUID *socketUUID; // ivar: _socketUUID
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(BOOL)writeMessageWithControlSocket:(int)arg0 drop:(BOOL)arg1 socketID:(NSUInteger)arg2 inboundPassOffset:(NSUInteger)arg3 inboundPeekOffset:(NSUInteger)arg4 outboundPassOffset:(NSUInteger)arg5 outboundPeekOffset:(NSUInteger)arg6 statsReportFrequency:(NSInteger)arg7 ;
-(BOOL)createDataCompleteReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createNewFlowReply:(id)arg0 controlSocket:(int)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)identifier;
-(id)identifierString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSocketFamily:(int)arg0 socketType:(int)arg1 socketProtocol:(int)arg2 pid:(int)arg3 epid:(int)arg4 uuid:(unsigned char)arg5 euuid:(unsigned char)arg6 socketID:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLocalAddress:(struct sockaddr *)arg0 ;
-(void)setRemoteAddress:(struct sockaddr *)arg0 ;
-(void)writeCurrentVerdictWithMessage:(id)arg0 controlSocket:(int)arg1 ;
-(void)writeXPCMessage:(id)arg0 drop:(BOOL)arg1 inboundPassOffset:(NSUInteger)arg2 inboundPeekOffset:(NSUInteger)arg3 outboundPassOffset:(NSUInteger)arg4 outboundPeekOffset:(NSUInteger)arg5 statsReportFrequency:(NSInteger)arg6 ;


@end


#endif