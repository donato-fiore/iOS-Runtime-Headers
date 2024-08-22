// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEROUTINEREQUESTMESSAGE_H
#define HDCODABLEROUTINEREQUESTMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableRoutineLocationRequest.h"
#import "HDCodableRoutineScenarioTriggeredRequest.h"

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest; // ivar: _fetchLocationRequest
@property (readonly, nonatomic) BOOL hasFetchLocationRequest;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasRequestType;
@property (readonly, nonatomic) BOOL hasScenarioTriggeredRequest;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) int requestType; // ivar: _requestType
@property (retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest; // ivar: _scenarioTriggeredRequest


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestTypeAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif