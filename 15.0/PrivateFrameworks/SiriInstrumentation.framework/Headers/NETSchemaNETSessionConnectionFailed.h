// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETSCHEMANETSESSIONCONNECTIONFAILED_H
#define NETSCHEMANETSESSIONCONNECTIONFAILED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "NETSchemaNETError.h"

@interface NETSchemaNETSessionConnectionFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int connectionMode; // ivar: _connectionMode
@property (nonatomic) int connectionType; // ivar: _connectionType
@property (retain, nonatomic) NETSchemaNETError *error; // ivar: _error
@property (nonatomic) BOOL hasConnectionMode;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasError; // ivar: _hasError
@property (nonatomic) BOOL hasIsDormant;
@property (nonatomic) BOOL hasIsWwanPreferred;
@property (nonatomic) BOOL hasNetworkSessionState;
@property (nonatomic) BOOL hasPolicyId; // ivar: _hasPolicyId
@property (nonatomic) BOOL hasSendBufferSize;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) BOOL hasUnderlyingError; // ivar: _hasUnderlyingError
@property (nonatomic) BOOL isDormant; // ivar: _isDormant
@property (nonatomic) BOOL isWwanPreferred; // ivar: _isWwanPreferred
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int networkSessionState; // ivar: _networkSessionState
@property (copy, nonatomic) NSString *policyId; // ivar: _policyId
@property (nonatomic) NSUInteger sendBufferSize; // ivar: _sendBufferSize
@property (nonatomic) int sessionType; // ivar: _sessionType
@property (retain, nonatomic) NETSchemaNETError *underlyingError; // ivar: _underlyingError


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif