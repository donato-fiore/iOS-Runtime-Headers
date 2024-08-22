// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGPBERROR_H
#define PSGPBERROR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PSGPBError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) int errorType; // ivar: _errorType
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasContextBeforeInput; // ivar: _hasContextBeforeInput
@property (nonatomic) BOOL hasErrorType;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasHasContextBeforeInput;
@property (nonatomic) BOOL hasHasRecipientNames;
@property (nonatomic) BOOL hasHasResponseContext;
@property (readonly, nonatomic) BOOL hasInitiatingProcess;
@property (nonatomic) BOOL hasIsDocumentEmpty;
@property (nonatomic) BOOL hasIsResponseContextBlacklisted;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (nonatomic) BOOL hasMaxPredictionItems;
@property (nonatomic) BOOL hasMaxStructuredInfoItems;
@property (nonatomic) BOOL hasMaxTextualResponseItems;
@property (nonatomic) BOOL hasRecipientNames; // ivar: _hasRecipientNames
@property (nonatomic) BOOL hasResponseContext; // ivar: _hasResponseContext
@property (readonly, nonatomic) BOOL hasTextContentType;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentName;
@property (readonly, nonatomic) BOOL hasTriggerAttributeField;
@property (readonly, nonatomic) BOOL hasTriggerAttributeSubtype;
@property (readonly, nonatomic) BOOL hasTriggerAttributeType;
@property (readonly, nonatomic) BOOL hasTriggerCategory;
@property (nonatomic) BOOL hasTriggerSourceType;
@property (retain, nonatomic) NSString *initiatingProcess; // ivar: _initiatingProcess
@property (nonatomic) BOOL isDocumentEmpty; // ivar: _isDocumentEmpty
@property (nonatomic) BOOL isResponseContextBlacklisted; // ivar: _isResponseContextBlacklisted
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) unsigned int maxPredictionItems; // ivar: _maxPredictionItems
@property (nonatomic) unsigned int maxStructuredInfoItems; // ivar: _maxStructuredInfoItems
@property (nonatomic) unsigned int maxTextualResponseItems; // ivar: _maxTextualResponseItems
@property (retain, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (retain, nonatomic) NSString *treatmentName; // ivar: _treatmentName
@property (retain, nonatomic) NSString *triggerAttributeField; // ivar: _triggerAttributeField
@property (retain, nonatomic) NSString *triggerAttributeSubtype; // ivar: _triggerAttributeSubtype
@property (retain, nonatomic) NSString *triggerAttributeType; // ivar: _triggerAttributeType
@property (retain, nonatomic) NSString *triggerCategory; // ivar: _triggerCategory
@property (nonatomic) int triggerSourceType; // ivar: _triggerSourceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)errorTypeAsString:(int)arg0 ;
-(id)triggerSourceTypeAsString:(int)arg0 ;
-(int)StringAsErrorType:(id)arg0 ;
-(int)StringAsTriggerSourceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif