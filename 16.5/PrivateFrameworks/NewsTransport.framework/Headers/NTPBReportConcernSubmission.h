// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBREPORTCONCERNSUBMISSION_H
#define NTPBREPORTCONCERNSUBMISSION_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBReportConcernSubmission : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int cancelLocation; // ivar: _cancelLocation
@property (nonatomic) BOOL hasCancelLocation;
@property (nonatomic) BOOL hasReportConcernLocation;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int reportConcernLocation; // ivar: _reportConcernLocation
@property (nonatomic) int resultType; // ivar: _resultType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif