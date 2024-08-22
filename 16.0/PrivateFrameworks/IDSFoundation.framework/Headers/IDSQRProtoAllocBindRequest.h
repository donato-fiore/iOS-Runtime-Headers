// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOALLOCBINDREQUEST_H
#define IDSQRPROTOALLOCBINDREQUEST_H

@class PBRequest, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface IDSQRProtoAllocBindRequest : PBRequest <NSCopying>

 {
    ? _publishedStreamIds;
    ? _has;
}


@property (retain, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (nonatomic) BOOL allWildcardSubscription; // ivar: _allWildcardSubscription
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (nonatomic) unsigned int channelBindingInfo; // ivar: _channelBindingInfo
@property (retain, nonatomic) NSString *clientHwVersion; // ivar: _clientHwVersion
@property (retain, nonatomic) NSString *clientOsVersion; // ivar: _clientOsVersion
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) BOOL hasChannelBindingInfo;
@property (readonly, nonatomic) BOOL hasClientHwVersion;
@property (readonly, nonatomic) BOOL hasClientOsVersion;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) BOOL hasMaxEmbeddedStatsResponseDelay;
@property (readonly, nonatomic) BOOL hasRandomSalt;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (nonatomic) BOOL hasServiceId;
@property (retain, nonatomic) NSMutableArray *materials; // ivar: _materials
@property (nonatomic) unsigned int maxConcurrentStreams; // ivar: _maxConcurrentStreams
@property (nonatomic) unsigned int maxEmbeddedStatsResponseDelay; // ivar: _maxEmbeddedStatsResponseDelay
@property (readonly, nonatomic) *unsigned int publishedStreamIds;
@property (readonly, nonatomic) NSUInteger publishedStreamIdsCount;
@property (retain, nonatomic) NSData *randomSalt; // ivar: _randomSalt
@property (retain, nonatomic) NSData *serverBlob; // ivar: _serverBlob
@property (nonatomic) unsigned int serviceId; // ivar: _serviceId
@property (retain, nonatomic) NSMutableArray *subscribedStreams; // ivar: _subscribedStreams


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)materialsAtIndex:(NSUInteger)arg0 ;
-(id)subscribedStreamsAtIndex:(NSUInteger)arg0 ;
-(unsigned int)publishedStreamIdsAtIndex:(NSUInteger)arg0 ;
-(void)addMaterials:(id)arg0 ;
-(void)addPublishedStreamIds:(unsigned int)arg0 ;
-(void)addSubscribedStreams:(id)arg0 ;
-(void)clearMaterials;
-(void)clearPublishedStreamIds;
-(void)clearSubscribedStreams;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif