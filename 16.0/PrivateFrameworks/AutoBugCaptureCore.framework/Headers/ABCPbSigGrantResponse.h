// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABCPBSIGGRANTRESPONSE_H
#define ABCPBSIGGRANTRESPONSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "ABCPbSigConfigWhitelist.h"

@interface ABCPbSigGrantResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int globalDecision; // ivar: _globalDecision
@property (nonatomic) BOOL hasGlobalDecision;
@property (readonly, nonatomic) BOOL hasSigConfigWhitelist;
@property (readonly, nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ABCPbSigConfigWhitelist *sigConfigWhitelist; // ivar: _sigConfigWhitelist
@property (retain, nonatomic) NSMutableArray *sigResponses; // ivar: _sigResponses
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (readonly) Class superclass;


+(Class)sigResponseType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)globalDecisionAsString:(int)arg0 ;
-(id)sigResponseAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGlobalDecision:(id)arg0 ;
-(void)addSigResponse:(id)arg0 ;
-(void)clearSigResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif