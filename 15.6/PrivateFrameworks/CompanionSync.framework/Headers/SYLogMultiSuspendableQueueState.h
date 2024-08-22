// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYLOGMULTISUSPENDABLEQUEUESTATE_H
#define SYLOGMULTISUSPENDABLEQUEUESTATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SYLogMultiSuspendableQueueState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasResumeCount;
@property (readonly, nonatomic) BOOL hasTarget;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int resumeCount; // ivar: _resumeCount
@property (retain, nonatomic) NSString *target; // ivar: _target


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