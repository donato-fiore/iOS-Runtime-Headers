// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BLASTDOORLPGAMECENTERINVITATIONMETADATA_H
#define _BLASTDOORLPGAMECENTERINVITATIONMETADATA_H

@class BlastDoorLPSpecializationMetadata, NSString;


#import "_BlastDoorLPImage.h"

@interface _BlastDoorLPGameCenterInvitationMetadata : BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *game; // ivar: _game
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (retain, nonatomic) _BlastDoorLPImage *image; // ivar: _image
@property (nonatomic) unsigned int maximumNumberOfPlayers; // ivar: _maximumNumberOfPlayers
@property (nonatomic) unsigned int minimumNumberOfPlayers; // ivar: _minimumNumberOfPlayers
@property (nonatomic) unsigned int numberOfPlayers; // ivar: _numberOfPlayers


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif