// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMACLPNLV4SAMPLEEVALUATIONFAILED_H
#define CLPINSTSCHEMACLPNLV4SAMPLEEVALUATIONFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CLPInstSchemaCLPNLv4SampleEvaluationFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasUserProfileSandboxFailure;
@property (nonatomic) BOOL hasXpcClientDisconnected;
@property (nonatomic) BOOL hasXpcClientNLURequestTimeout;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL userProfileSandboxFailure; // ivar: _userProfileSandboxFailure
@property (nonatomic) BOOL xpcClientDisconnected; // ivar: _xpcClientDisconnected
@property (nonatomic) BOOL xpcClientNLURequestTimeout; // ivar: _xpcClientNLURequestTimeout


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteUserProfileSandboxFailure;
-(void)deleteXpcClientDisconnected;
-(void)deleteXpcClientNLURequestTimeout;
-(void)writeTo:(id)arg0 ;


@end


#endif