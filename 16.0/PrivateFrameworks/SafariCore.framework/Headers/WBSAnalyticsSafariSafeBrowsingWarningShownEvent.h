// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSANALYTICSSAFARISAFEBROWSINGWARNINGSHOWNEVENT_H
#define WBSANALYTICSSAFARISAFEBROWSINGWARNINGSHOWNEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariSafeBrowsingWarningShownEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasProvider;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int provider; // ivar: _provider
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)providerAsString:(int)arg0 ;
-(int)StringAsProvider:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif