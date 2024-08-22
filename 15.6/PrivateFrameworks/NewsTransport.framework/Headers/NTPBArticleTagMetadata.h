// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLETAGMETADATA_H
#define NTPBARTICLETAGMETADATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBTagMetadata.h"

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata; // ivar: _channelTagMetadata
@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas; // ivar: _topicTagMetadatas


+(Class)topicTagMetadataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicTagMetadataAtIndex:(NSUInteger)arg0 ;
-(void)addTopicTagMetadata:(id)arg0 ;
-(void)clearTopicTagMetadatas;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif