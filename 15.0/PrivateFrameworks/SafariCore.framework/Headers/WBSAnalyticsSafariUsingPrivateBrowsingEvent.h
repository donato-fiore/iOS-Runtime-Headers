// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSANALYTICSSAFARIUSINGPRIVATEBROWSINGEVENT_H
#define WBSANALYTICSSAFARIUSINGPRIVATEBROWSINGEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariUsingPrivateBrowsingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInPrivateBrowsing;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL inPrivateBrowsing; // ivar: _inPrivateBrowsing
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