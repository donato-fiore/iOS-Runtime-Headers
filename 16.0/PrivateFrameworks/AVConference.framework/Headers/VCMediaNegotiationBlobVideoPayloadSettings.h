// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBVIDEOPAYLOADSETTINGS_H
#define VCMEDIANEGOTIATIONBLOBVIDEOPAYLOADSETTINGS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface VCMediaNegotiationBlobVideoPayloadSettings : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *featureString; // ivar: _featureString
@property (nonatomic) unsigned int parameterSet; // ivar: _parameterSet
@property (nonatomic) unsigned int payload; // ivar: _payload
@property (retain, nonatomic) NSMutableArray *videoRuleCollections; // ivar: _videoRuleCollections


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)videoRuleCollectionsAtIndex:(NSUInteger)arg0 ;
-(void)addVideoRuleCollections:(id)arg0 ;
-(void)clearVideoRuleCollections;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif