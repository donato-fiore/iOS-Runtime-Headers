// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBTOGGLEAUDIOCOMMAND_H
#define _SFPBTOGGLEAUDIOCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBToggleAudioCommand, NSSecureCoding;



@interface _SFPBToggleAudioCommand : PBCodable <_SFPBToggleAudioCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *localMediaIdentifier; // ivar: _localMediaIdentifier
@property (nonatomic) int mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalLibraryIdentifier; // ivar: _universalLibraryIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif