// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTODEVICEDIDREGISTERREQUEST_H
#define NPKPROTODEVICEDIDREGISTERREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *brokerRegionPushTopics; // ivar: _brokerRegionPushTopics
@property (readonly, nonatomic) BOOL hasPrimaryRegionTopic;
@property (retain, nonatomic) NSString *primaryRegionTopic; // ivar: _primaryRegionTopic
@property (retain, nonatomic) NSMutableArray *tsmRegionPushTopics; // ivar: _tsmRegionPushTopics
@property (retain, nonatomic) NSMutableArray *tsmRegionURLs; // ivar: _tsmRegionURLs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)brokerRegionPushTopicsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tsmRegionPushTopicsAtIndex:(NSUInteger)arg0 ;
-(id)tsmRegionURLsAtIndex:(NSUInteger)arg0 ;
-(void)addBrokerRegionPushTopics:(id)arg0 ;
-(void)addTsmRegionPushTopics:(id)arg0 ;
-(void)addTsmRegionURLs:(id)arg0 ;
-(void)clearBrokerRegionPushTopics;
-(void)clearTsmRegionPushTopics;
-(void)clearTsmRegionURLs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif