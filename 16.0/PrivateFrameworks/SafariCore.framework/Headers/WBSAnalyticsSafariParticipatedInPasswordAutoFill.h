// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSANALYTICSSAFARIPARTICIPATEDINPASSWORDAUTOFILL_H
#define WBSANALYTICSSAFARIPARTICIPATEDINPASSWORDAUTOFILL_H

@class PBCodable;
@protocol NSCopying;



@interface WBSAnalyticsSafariParticipatedInPasswordAutoFill : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int autoFillInteractionType; // ivar: _autoFillInteractionType
@property (nonatomic) BOOL hasAutoFillInteractionType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autoFillInteractionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAutoFillInteractionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif