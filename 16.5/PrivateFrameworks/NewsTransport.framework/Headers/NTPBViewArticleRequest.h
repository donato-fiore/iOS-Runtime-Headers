// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBVIEWARTICLEREQUEST_H
#define NTPBVIEWARTICLEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NTPBViewArticleRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *feedUri; // ivar: _feedUri
@property (readonly, nonatomic) BOOL hasFeedUri;
@property (readonly, nonatomic) BOOL hasStoreFrontId;
@property (readonly, nonatomic) BOOL hasWebPageUri;
@property (retain, nonatomic) NSString *storeFrontId; // ivar: _storeFrontId
@property (retain, nonatomic) NSString *webPageUri; // ivar: _webPageUri


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