// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILTERSOCKETFLOW_H
#define NEFILTERSOCKETFLOW_H

@class NSUUID, NWEndpoint, NSString;
@protocol NSSecureCoding, NSCopying;


#import "NEFilterFlow.h"

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying>

 {
    NSInteger _generateIdentifierOnce;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUInteger _socketID;
    NSUUID *_socketUUID;
}


@property (copy) NWEndpoint *localEndpoint; // ivar: _localEndpoint
@property (copy) NWEndpoint *remoteEndpoint; // ivar: _remoteEndpoint
@property (copy) NSString *remoteHostname; // ivar: _remoteHostname
@property int socketFamily; // ivar: _socketFamily
@property int socketProtocol; // ivar: _socketProtocol
@property int socketType; // ivar: _socketType


+(BOOL)supportsSecureCoding;
-(BOOL)createDataCompleteReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createNewFlowReply:(id)arg0 controlSocket:(int)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)identifier;
-(id)identifierString;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif