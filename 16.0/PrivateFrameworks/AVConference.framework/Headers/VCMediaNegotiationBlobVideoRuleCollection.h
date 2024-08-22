// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBVIDEORULECOLLECTION_H
#define VCMEDIANEGOTIATIONBLOBVIDEORULECOLLECTION_H

@class PBCodable;
@protocol NSCopying;



@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int formats; // ivar: _formats
@property (nonatomic) unsigned int formatsExt1; // ivar: _formatsExt1
@property (nonatomic) BOOL hasFormatsExt1;
@property (nonatomic) BOOL hasPreferredFormat;
@property (nonatomic) BOOL hasPreferredFormatExt1;
@property (nonatomic) int operation; // ivar: _operation
@property (nonatomic) unsigned int preferredFormat; // ivar: _preferredFormat
@property (nonatomic) unsigned int preferredFormatExt1; // ivar: _preferredFormatExt1
@property (nonatomic) int transport; // ivar: _transport


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)operationAsString:(int)arg0 ;
-(id)transportAsString:(int)arg0 ;
-(int)StringAsOperation:(id)arg0 ;
-(int)StringAsTransport:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif