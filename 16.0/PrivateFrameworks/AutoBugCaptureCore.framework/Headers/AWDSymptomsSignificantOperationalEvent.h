// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDSYMPTOMSSIGNIFICANTOPERATIONALEVENT_H
#define AWDSYMPTOMSSIGNIFICANTOPERATIONALEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDSymptomsSignificantOperationalEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *alternateName; // ivar: _alternateName
@property (nonatomic) int error; // ivar: _error
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) BOOL hasAlternateName;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int name; // ivar: _name
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorAsString:(int)arg0 ;
-(id)nameAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsError:(id)arg0 ;
-(int)StringAsName:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif