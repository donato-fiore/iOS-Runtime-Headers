// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSDIAGNOSTICINCIDENTEVENT_H
#define AWDSYMPTOMSDIAGNOSTICINCIDENTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsDiagnosticIncidentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *detectedName; // ivar: _detectedName
@property (retain, nonatomic) NSString *effectiveName; // ivar: _effectiveName
@property (readonly, nonatomic) BOOL hasDetectedName;
@property (readonly, nonatomic) BOOL hasEffectiveName;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stateAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif