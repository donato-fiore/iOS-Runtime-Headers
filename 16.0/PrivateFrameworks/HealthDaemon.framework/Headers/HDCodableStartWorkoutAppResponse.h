// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESTARTWORKOUTAPPRESPONSE_H
#define HDCODABLESTARTWORKOUTAPPRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableError.h"

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLaunchError;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) HDCodableError *launchError; // ivar: _launchError
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) BOOL success; // ivar: _success


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