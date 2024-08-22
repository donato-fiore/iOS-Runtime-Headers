// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBMODECONFIGURATIONUIFLOWLOGGINGEVENT_H
#define ATXPBMODECONFIGURATIONUIFLOWLOGGINGEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBModeConfigurationUIFlowLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *candidateEntityIdentifiers; // ivar: _candidateEntityIdentifiers
@property (retain, nonatomic) NSMutableArray *currentEntityIdentifiers; // ivar: _currentEntityIdentifiers
@property (retain, nonatomic) NSString *dndModeUUID; // ivar: _dndModeUUID
@property (readonly, nonatomic) BOOL hasDndModeUUID;
@property (nonatomic) BOOL hasModeConfigurationEntityType;
@property (nonatomic) BOOL hasModeConfigurationType;
@property (nonatomic) BOOL hasModeConfigurationUI;
@property (nonatomic) BOOL hasSecondsSinceReferenceDate;
@property (nonatomic) int modeConfigurationEntityType; // ivar: _modeConfigurationEntityType
@property (nonatomic) int modeConfigurationType; // ivar: _modeConfigurationType
@property (nonatomic) int modeConfigurationUI; // ivar: _modeConfigurationUI
@property (retain, nonatomic) NSMutableArray *previousEntityIdentifiers; // ivar: _previousEntityIdentifiers
@property (nonatomic) CGFloat secondsSinceReferenceDate; // ivar: _secondsSinceReferenceDate
@property (retain, nonatomic) NSMutableArray *suggestedEntityIdentifiers; // ivar: _suggestedEntityIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)candidateEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)modeConfigurationEntityTypeAsString:(int)arg0 ;
-(id)modeConfigurationTypeAsString:(int)arg0 ;
-(id)modeConfigurationUIAsString:(int)arg0 ;
-(id)previousEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)suggestedEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(int)StringAsModeConfigurationEntityType:(id)arg0 ;
-(int)StringAsModeConfigurationType:(id)arg0 ;
-(int)StringAsModeConfigurationUI:(id)arg0 ;
-(void)addCandidateEntityIdentifiers:(id)arg0 ;
-(void)addCurrentEntityIdentifiers:(id)arg0 ;
-(void)addPreviousEntityIdentifiers:(id)arg0 ;
-(void)addSuggestedEntityIdentifiers:(id)arg0 ;
-(void)clearCandidateEntityIdentifiers;
-(void)clearCurrentEntityIdentifiers;
-(void)clearPreviousEntityIdentifiers;
-(void)clearSuggestedEntityIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif