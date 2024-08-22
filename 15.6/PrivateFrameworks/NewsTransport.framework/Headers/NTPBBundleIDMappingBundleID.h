// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBBUNDLEIDMAPPINGBUNDLEID_H
#define NTPBBUNDLEIDMAPPINGBUNDLEID_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSMutableArray *channelTags; // ivar: _channelTags
@property (retain, nonatomic) NSMutableArray *sectionTags; // ivar: _sectionTags
@property (retain, nonatomic) NSMutableArray *topicTags; // ivar: _topicTags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)channelTagsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionTagsAtIndex:(NSUInteger)arg0 ;
-(id)topicTagsAtIndex:(NSUInteger)arg0 ;
-(void)addChannelTags:(id)arg0 ;
-(void)addSectionTags:(id)arg0 ;
-(void)addTopicTags:(id)arg0 ;
-(void)clearChannelTags;
-(void)clearSectionTags;
-(void)clearTopicTags;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif