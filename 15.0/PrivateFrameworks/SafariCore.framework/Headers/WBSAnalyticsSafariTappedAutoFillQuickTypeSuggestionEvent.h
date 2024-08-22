// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSANALYTICSSAFARITAPPEDAUTOFILLQUICKTYPESUGGESTIONEVENT_H
#define WBSANALYTICSSAFARITAPPEDAUTOFILLQUICKTYPESUGGESTIONEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariTappedAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int category; // ivar: _category
@property (nonatomic) int formProperty; // ivar: _formProperty
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasFormProperty;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formPropertyAsString:(int)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(int)StringAsFormProperty:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif