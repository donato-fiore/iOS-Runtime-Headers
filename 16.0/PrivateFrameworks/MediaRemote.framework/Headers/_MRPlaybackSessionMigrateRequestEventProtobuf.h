// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTEVENTPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTEVENTPROTOBUF_H

@class PBCodable, NSError, NSString;
@protocol NSCopying;



@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat endTimestamp; // ivar: _endTimestamp
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasStartTimestamp;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)calculatedDuration;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif