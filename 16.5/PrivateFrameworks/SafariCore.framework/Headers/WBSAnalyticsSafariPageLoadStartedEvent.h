// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSANALYTICSSAFARIPAGELOADSTARTEDEVENT_H
#define WBSANALYTICSSAFARIPAGELOADSTARTEDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariPageLoadStartedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger configurationID; // ivar: _configurationID
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger pageID; // ivar: _pageID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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