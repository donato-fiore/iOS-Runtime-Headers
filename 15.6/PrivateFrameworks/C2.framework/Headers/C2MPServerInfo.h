// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPSERVERINFO_H
#define C2MPSERVERINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface C2MPServerInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPartition;
@property (readonly, nonatomic) BOOL hasServiceBuild;
@property (readonly, nonatomic) BOOL hasServiceInstance;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *partition; // ivar: _partition
@property (retain, nonatomic) NSString *serviceBuild; // ivar: _serviceBuild
@property (retain, nonatomic) NSString *serviceInstance; // ivar: _serviceInstance
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


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