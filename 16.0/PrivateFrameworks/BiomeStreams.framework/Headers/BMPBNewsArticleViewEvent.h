// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBNEWSARTICLEVIEWEVENT_H
#define BMPBNEWSARTICLEVIEWEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBNewsArticleViewEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasPublication;
@property (readonly, nonatomic) BOOL hasSummary;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *publication; // ivar: _publication
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


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