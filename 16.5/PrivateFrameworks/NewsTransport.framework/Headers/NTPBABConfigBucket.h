// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBABCONFIGBUCKET_H
#define NTPBABCONFIGBUCKET_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBConfig.h"

@interface NTPBABConfigBucket : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger bucketCeiling; // ivar: _bucketCeiling
@property (nonatomic) NSInteger bucketFloor; // ivar: _bucketFloor
@property (retain, nonatomic) NTPBConfig *config; // ivar: _config
@property (nonatomic) BOOL hasBucketCeiling;
@property (nonatomic) BOOL hasBucketFloor;
@property (readonly, nonatomic) BOOL hasConfig;


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