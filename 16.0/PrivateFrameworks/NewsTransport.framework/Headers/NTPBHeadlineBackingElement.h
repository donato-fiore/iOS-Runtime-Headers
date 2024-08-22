// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBHEADLINEBACKINGELEMENT_H
#define NTPBHEADLINEBACKINGELEMENT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *articleRecordData; // ivar: _articleRecordData
@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (readonly, nonatomic) BOOL hasMasterIssueRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *masterIssueRecordData; // ivar: _masterIssueRecordData
@property (retain, nonatomic) NSData *sourceChannelRecordData; // ivar: _sourceChannelRecordData


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