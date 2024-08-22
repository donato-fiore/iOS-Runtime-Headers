// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBSOCIALHIGHLIGHTFEEDBACKEVENT_H
#define BMPBSOCIALHIGHLIGHTFEEDBACKEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "BMPBRankableSocialHighlight.h"

@interface BMPBSocialHighlightFeedbackEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *clientVariant; // ivar: _clientVariant
@property (nonatomic) CGFloat feedbackCreationSecondsSinceReferenceDate; // ivar: _feedbackCreationSecondsSinceReferenceDate
@property (nonatomic) int feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (readonly, nonatomic) BOOL hasClientVariant;
@property (nonatomic) BOOL hasFeedbackCreationSecondsSinceReferenceDate;
@property (nonatomic) BOOL hasFeedbackType;
@property (readonly, nonatomic) BOOL hasHighlight;
@property (retain, nonatomic) BMPBRankableSocialHighlight *highlight; // ivar: _highlight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackTypeAsString:(int)arg0 ;
-(int)StringAsFeedbackType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif