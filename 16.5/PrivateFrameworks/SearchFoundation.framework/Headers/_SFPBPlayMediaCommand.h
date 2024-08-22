// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBPLAYMEDIACOMMAND_H
#define _SFPBPLAYMEDIACOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBPlayMediaCommand, NSSecureCoding;


#import "_SFPBMediaMetadata.h"

@interface _SFPBPlayMediaCommand : PBCodable <_SFPBPlayMediaCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBMediaMetadata *mediaMetadata; // ivar: _mediaMetadata
@property (nonatomic) int playbackLocation; // ivar: _playbackLocation
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif