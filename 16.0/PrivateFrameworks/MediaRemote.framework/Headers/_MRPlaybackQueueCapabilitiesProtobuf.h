// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYBACKQUEUECAPABILITIESPROTOBUF_H
#define _MRPLAYBACKQUEUECAPABILITIESPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRequestByIdentifiers;
@property (nonatomic) BOOL hasRequestByRange;
@property (nonatomic) BOOL hasRequestByRequest;
@property (nonatomic) BOOL requestByIdentifiers; // ivar: _requestByIdentifiers
@property (nonatomic) BOOL requestByRange; // ivar: _requestByRange
@property (nonatomic) BOOL requestByRequest; // ivar: _requestByRequest


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