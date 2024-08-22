// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIMETRICSMAILINTELLIGENCEFORMESSAGE_H
#define SGMIMETRICSMAILINTELLIGENCEFORMESSAGE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SGMIMetricsInferenceAndGroundTruth.h"

@interface SGMIMetricsMailIntelligenceForMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *active; // ivar: _active
@property (retain, nonatomic) SGMIMetricsInferenceAndGroundTruth *background; // ivar: _background
@property (readonly, nonatomic) BOOL hasActive;
@property (readonly, nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL hasHoursSinceReference;
@property (readonly, nonatomic) BOOL hasLang;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasNbCharactersInMailSubject;
@property (nonatomic) BOOL hasNbTokensInMailSubject;
@property (nonatomic) BOOL hasPreviousInteractionFromUserOnConversationInMinutes;
@property (nonatomic) BOOL hasPreviousInteractionOnConversationInMinutes;
@property (nonatomic) BOOL hasSenderConnectionScore;
@property (nonatomic) BOOL hasTimeDifferenceFromReceptionToSaliencyInferenceInSeconds;
@property (nonatomic) unsigned int hoursSinceReference; // ivar: _hoursSinceReference
@property (retain, nonatomic) NSString *lang; // ivar: _lang
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *mailAttachmentHistograms; // ivar: _mailAttachmentHistograms
@property (nonatomic) unsigned int nbCharactersInMailSubject; // ivar: _nbCharactersInMailSubject
@property (nonatomic) unsigned int nbTokensInMailSubject; // ivar: _nbTokensInMailSubject
@property (nonatomic) unsigned int previousInteractionFromUserOnConversationInMinutes; // ivar: _previousInteractionFromUserOnConversationInMinutes
@property (nonatomic) unsigned int previousInteractionOnConversationInMinutes; // ivar: _previousInteractionOnConversationInMinutes
@property (nonatomic) float senderConnectionScore; // ivar: _senderConnectionScore
@property (nonatomic) unsigned int timeDifferenceFromReceptionToSaliencyInferenceInSeconds; // ivar: _timeDifferenceFromReceptionToSaliencyInferenceInSeconds


+(Class)mailAttachmentHistogramType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailAttachmentHistogramAtIndex:(NSUInteger)arg0 ;
-(void)addMailAttachmentHistogram:(id)arg0 ;
-(void)clearMailAttachmentHistograms;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif