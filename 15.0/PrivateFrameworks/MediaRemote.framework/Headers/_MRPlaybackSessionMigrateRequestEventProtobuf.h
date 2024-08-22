// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTEVENTPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTEVENTPROTOBUF_H

@class PBCodable, NSString, NSError;
@protocol NSCopying;



@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying>

 {
    CGFloat _duration;
    CGFloat _endTimestamp;
    NSInteger _errorCode;
    CGFloat _startTimestamp;
    NSString *_errorDescription;
    NSString *_name;
    ? _has;
}


@property (readonly, nonatomic) NSError *error;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)calculatedDuration;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif