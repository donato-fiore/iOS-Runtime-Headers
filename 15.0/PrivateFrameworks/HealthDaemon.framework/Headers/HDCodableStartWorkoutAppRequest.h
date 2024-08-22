// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESTARTWORKOUTAPPREQUEST_H
#define HDCODABLESTARTWORKOUTAPPREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "HDCodableWorkoutConfiguration.h"

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (readonly, nonatomic) BOOL hasWorkoutConfiguration;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) HDCodableWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


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