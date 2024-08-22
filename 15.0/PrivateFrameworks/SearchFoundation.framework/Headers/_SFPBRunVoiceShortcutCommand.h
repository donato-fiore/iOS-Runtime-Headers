// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBRUNVOICESHORTCUTCOMMAND_H
#define _SFPBRUNVOICESHORTCUTCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBRunVoiceShortcutCommand, NSSecureCoding;



@interface _SFPBRunVoiceShortcutCommand : PBCodable <_SFPBRunVoiceShortcutCommand, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *voiceShortcutIdentifier; // ivar: _voiceShortcutIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif