// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPHONEPLAYVOICEMAIL_H
#define SAPHONEPLAYVOICEMAIL_H

@class NSURL;


#import "SADomainCommand.h"
#import "SARemoteDevice.h"

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (retain, nonatomic) SARemoteDevice *targetDevice;
@property (copy, nonatomic) NSURL *voiceMailId;


+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif