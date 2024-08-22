// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSANALYTICSSAFARIINTERACTEDWITHGENERATEDPASSWORDEVENT_H
#define WBSANALYTICSSAFARIINTERACTEDWITHGENERATEDPASSWORDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariInteractedWithGeneratedPasswordEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int generatedPasswordInteractionType; // ivar: _generatedPasswordInteractionType
@property (nonatomic) BOOL hasGeneratedPasswordInteractionType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)generatedPasswordInteractionTypeAsString:(int)arg0 ;
-(int)StringAsGeneratedPasswordInteractionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif