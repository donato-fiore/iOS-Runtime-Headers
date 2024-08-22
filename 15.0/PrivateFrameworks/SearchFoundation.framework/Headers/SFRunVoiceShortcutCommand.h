// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRUNVOICESHORTCUTCOMMAND_H
#define SFRUNVOICESHORTCUTCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFRunVoiceShortcutCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFRunVoiceShortcutCommand : SFCommand <SFRunVoiceShortcutCommand, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *voiceShortcutIdentifier; // ivar: _voiceShortcutIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif