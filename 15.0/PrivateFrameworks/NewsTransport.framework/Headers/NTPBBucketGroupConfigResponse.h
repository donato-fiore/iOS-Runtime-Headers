// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBBUCKETGROUPCONFIGRESPONSE_H
#define NTPBBUCKETGROUPCONFIGRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "NTPBBucketGroupConfig.h"
#import "NTPBBloomFilterInfo.h"

@interface NTPBBucketGroupConfigResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBBucketGroupConfig *bucketGroupConfig; // ivar: _bucketGroupConfig
@property (retain, nonatomic) NTPBBloomFilterInfo *domainBloomFilterInfo; // ivar: _domainBloomFilterInfo
@property (readonly, nonatomic) BOOL hasBucketGroupConfig;
@property (readonly, nonatomic) BOOL hasDomainBloomFilterInfo;


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