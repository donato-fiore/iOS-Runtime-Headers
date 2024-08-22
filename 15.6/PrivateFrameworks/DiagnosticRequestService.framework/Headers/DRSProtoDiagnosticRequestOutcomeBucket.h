// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTODIAGNOSTICREQUESTOUTCOMEBUCKET_H
#define DRSPROTODIAGNOSTICREQUESTOUTCOMEBUCKET_H

@class PBCodable;
@protocol NSCopying;



@interface DRSProtoDiagnosticRequestOutcomeBucket : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) BOOL hasRequestState;
@property (nonatomic) int outcome; // ivar: _outcome
@property (nonatomic) int requestState; // ivar: _requestState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outcomeAsString:(int)arg0 ;
-(id)requestStateAsString:(int)arg0 ;
-(int)StringAsOutcome:(id)arg0 ;
-(int)StringAsRequestState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif