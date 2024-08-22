// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INWHOLEHOUSEAUDIOMETADATA_H
#define INWHOLEHOUSEAUDIOMETADATA_H

@class NSString, NSNumber, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INWholeHouseAudioMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *hasExcept; // ivar: _hasExcept
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *intentDestinationSpeakers; // ivar: _intentDestinationSpeakers
@property (readonly, copy, nonatomic) NSArray *intentPermanentNames; // ivar: _intentPermanentNames
@property (readonly, copy, nonatomic) NSArray *intentSpeakerNames; // ivar: _intentSpeakerNames
@property (readonly, copy, nonatomic) NSArray *intentSpeakerRooms; // ivar: _intentSpeakerRooms
@property (readonly, copy, nonatomic) NSNumber *isAllSpeakers; // ivar: _isAllSpeakers
@property (readonly, copy, nonatomic) NSNumber *isInHere; // ivar: _isInHere
@property (readonly, copy, nonatomic) NSNumber *isParticipatingSpeaker; // ivar: _isParticipatingSpeaker
@property (readonly, copy, nonatomic) NSNumber *isPauseOrStop; // ivar: _isPauseOrStop
@property (readonly, copy, nonatomic) NSNumber *isWholeHouseAudioCommand; // ivar: _isWholeHouseAudioCommand
@property (readonly, copy, nonatomic) NSNumber *numberOfHomeAutomationWords; // ivar: _numberOfHomeAutomationWords
@property (readonly, copy, nonatomic) NSArray *permanentNames; // ivar: _permanentNames
@property (readonly, copy, nonatomic) NSArray *speakerNames; // ivar: _speakerNames
@property (readonly, copy, nonatomic) NSArray *speakerRooms; // ivar: _speakerRooms
@property (readonly, copy, nonatomic) NSArray *spokenEntityNames; // ivar: _spokenEntityNames
@property (readonly, copy, nonatomic) NSArray *spokenEntityTypes; // ivar: _spokenEntityTypes
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpeakerNames:(id)arg0 speakerRooms:(id)arg1 permanentNames:(id)arg2 intentSpeakerNames:(id)arg3 intentSpeakerRooms:(id)arg4 intentDestinationSpeakers:(id)arg5 intentPermanentNames:(id)arg6 spokenEntityTypes:(id)arg7 spokenEntityNames:(id)arg8 numberOfHomeAutomationWords:(id)arg9 isAllSpeakers:(id)arg10 isPauseOrStop:(id)arg11 isWholeHouseAudioCommand:(id)arg12 isInHere:(id)arg13 hasExcept:(id)arg14 isParticipatingSpeaker:(id)arg15 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif