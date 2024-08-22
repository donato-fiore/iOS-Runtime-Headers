// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBWHOLEHOUSEAUDIOMETADATA_H
#define _INPBWHOLEHOUSEAUDIOMETADATA_H

@class PBCodable, NSString, NSArray;
@protocol _INPBWholeHouseAudioMetadata, NSSecureCoding, NSCopying;



@interface _INPBWholeHouseAudioMetadata : PBCodable <_INPBWholeHouseAudioMetadata, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasExcept; // ivar: _hasExcept
@property (nonatomic) BOOL hasHasExcept;
@property (nonatomic) BOOL hasIsAllSpeakers;
@property (nonatomic) BOOL hasIsInHere;
@property (nonatomic) BOOL hasIsParticipatingSpeaker;
@property (nonatomic) BOOL hasIsPauseOrStop;
@property (nonatomic) BOOL hasIsWholeHouseAudioCommand;
@property (nonatomic) BOOL hasNumberOfHomeAutomationWords;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *intentDestinationSpeakers; // ivar: _intentDestinationSpeakers
@property (readonly, nonatomic) NSUInteger intentDestinationSpeakersCount;
@property (copy, nonatomic) NSArray *intentPermanentNames; // ivar: _intentPermanentNames
@property (readonly, nonatomic) NSUInteger intentPermanentNamesCount;
@property (copy, nonatomic) NSArray *intentSpeakerNames; // ivar: _intentSpeakerNames
@property (readonly, nonatomic) NSUInteger intentSpeakerNamesCount;
@property (copy, nonatomic) NSArray *intentSpeakerRooms; // ivar: _intentSpeakerRooms
@property (readonly, nonatomic) NSUInteger intentSpeakerRoomsCount;
@property (nonatomic) BOOL isAllSpeakers; // ivar: _isAllSpeakers
@property (nonatomic) BOOL isInHere; // ivar: _isInHere
@property (nonatomic) BOOL isParticipatingSpeaker; // ivar: _isParticipatingSpeaker
@property (nonatomic) BOOL isPauseOrStop; // ivar: _isPauseOrStop
@property (nonatomic) BOOL isWholeHouseAudioCommand; // ivar: _isWholeHouseAudioCommand
@property (nonatomic) int numberOfHomeAutomationWords; // ivar: _numberOfHomeAutomationWords
@property (copy, nonatomic) NSArray *permanentNames; // ivar: _permanentNames
@property (readonly, nonatomic) NSUInteger permanentNamesCount;
@property (copy, nonatomic) NSArray *speakerNames; // ivar: _speakerNames
@property (readonly, nonatomic) NSUInteger speakerNamesCount;
@property (copy, nonatomic) NSArray *speakerRooms; // ivar: _speakerRooms
@property (readonly, nonatomic) NSUInteger speakerRoomsCount;
@property (copy, nonatomic) NSArray *spokenEntityNames; // ivar: _spokenEntityNames
@property (readonly, nonatomic) NSUInteger spokenEntityNamesCount;
@property (copy, nonatomic) NSArray *spokenEntityTypes; // ivar: _spokenEntityTypes
@property (readonly, nonatomic) NSUInteger spokenEntityTypesCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)spokenEntityNameType;
+(Class)spokenEntityTypeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentDestinationSpeakersAtIndex:(NSUInteger)arg0 ;
-(id)intentPermanentNamesAtIndex:(NSUInteger)arg0 ;
-(id)intentSpeakerNamesAtIndex:(NSUInteger)arg0 ;
-(id)intentSpeakerRoomsAtIndex:(NSUInteger)arg0 ;
-(id)permanentNamesAtIndex:(NSUInteger)arg0 ;
-(id)speakerNamesAtIndex:(NSUInteger)arg0 ;
-(id)speakerRoomsAtIndex:(NSUInteger)arg0 ;
-(id)spokenEntityNameAtIndex:(NSUInteger)arg0 ;
-(id)spokenEntityTypeAtIndex:(NSUInteger)arg0 ;
-(void)addIntentDestinationSpeakers:(id)arg0 ;
-(void)addIntentPermanentNames:(id)arg0 ;
-(void)addIntentSpeakerNames:(id)arg0 ;
-(void)addIntentSpeakerRooms:(id)arg0 ;
-(void)addPermanentNames:(id)arg0 ;
-(void)addSpeakerNames:(id)arg0 ;
-(void)addSpeakerRooms:(id)arg0 ;
-(void)addSpokenEntityName:(id)arg0 ;
-(void)addSpokenEntityType:(id)arg0 ;
-(void)clearIntentDestinationSpeakers;
-(void)clearIntentPermanentNames;
-(void)clearIntentSpeakerNames;
-(void)clearIntentSpeakerRooms;
-(void)clearPermanentNames;
-(void)clearSpeakerNames;
-(void)clearSpeakerRooms;
-(void)clearSpokenEntityNames;
-(void)clearSpokenEntityTypes;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif