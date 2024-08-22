// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDDEDDEFERREDCHECKIN_H
#define AWDDEDDEFERREDCHECKIN_H

@class PBCodable;
@protocol NSCopying;



@interface AWDDEDDeferredCheckIn : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumtasks;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger numtasks; // ivar: _numtasks
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif