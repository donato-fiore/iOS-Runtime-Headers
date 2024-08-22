// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEROUTINELOCATIONRESPONSE_H
#define HDCODABLEROUTINELOCATIONRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "HDCodableRoutineLocation.h"

@interface HDCodableRoutineLocationResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest; // ivar: _locationOfInterest


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