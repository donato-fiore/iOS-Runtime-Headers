// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSANALYTICSSAFARISAFEBROWSINGUSERACTIONAFTERSEEINGWARNINGEVENT_H
#define WBSANALYTICSSAFARISAFEBROWSINGUSERACTIONAFTERSEEINGWARNINGEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariSafeBrowsingUserActionAfterSeeingWarningEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int action; // ivar: _action
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAction:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif