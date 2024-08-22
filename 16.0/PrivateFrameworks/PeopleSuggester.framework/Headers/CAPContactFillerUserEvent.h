// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAPCONTACTFILLERUSEREVENT_H
#define CAPCONTACTFILLERUSEREVENT_H

@class PBCodable;
@protocol NSCopying;



@interface CAPContactFillerUserEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHighConfidenceRuleCount;
@property (nonatomic) BOOL hasLowConfidenceRuleCount;
@property (nonatomic) BOOL hasMediumConfidenceRuleCount;
@property (nonatomic) unsigned int highConfidenceRuleCount; // ivar: _highConfidenceRuleCount
@property (nonatomic) unsigned int lowConfidenceRuleCount; // ivar: _lowConfidenceRuleCount
@property (nonatomic) unsigned int mediumConfidenceRuleCount; // ivar: _mediumConfidenceRuleCount
@property (nonatomic) unsigned int shareInteractionsSent; // ivar: _shareInteractionsSent
@property (nonatomic) unsigned int textInteractionsReceived; // ivar: _textInteractionsReceived
@property (nonatomic) unsigned int textInteractionsSent; // ivar: _textInteractionsSent


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