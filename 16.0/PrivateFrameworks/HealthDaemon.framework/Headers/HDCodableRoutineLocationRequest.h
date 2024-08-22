// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEROUTINELOCATIONREQUEST_H
#define HDCODABLEROUTINELOCATIONREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface HDCodableRoutineLocationRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType; // ivar: _locationType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationTypeAsString:(int)arg0 ;
-(int)StringAsLocationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif