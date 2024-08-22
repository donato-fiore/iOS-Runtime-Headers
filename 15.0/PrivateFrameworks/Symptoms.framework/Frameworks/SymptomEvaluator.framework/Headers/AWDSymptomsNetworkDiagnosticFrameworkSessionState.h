// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSNETWORKDIAGNOSTICFRAMEWORKSESSIONSTATE_H
#define AWDSYMPTOMSNETWORKDIAGNOSTICFRAMEWORKSESSIONSTATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInState;
@property (nonatomic) BOOL hasStateHeldForSecs;
@property (readonly, nonatomic) BOOL hasSymptomName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int inState; // ivar: _inState
@property (nonatomic) NSUInteger stateHeldForSecs; // ivar: _stateHeldForSecs
@property (retain, nonatomic) NSString *symptomName; // ivar: _symptomName
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inStateAsString:(int)arg0 ;
-(int)StringAsInState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif