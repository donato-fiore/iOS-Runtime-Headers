// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONEVOICEMAIL_H
#define SAPHONEVOICEMAIL_H

@class NSString, NSNumber;


#import "SAPhoneCallSearchResult.h"

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *length;


+(id)voiceMail;
+(id)voiceMailWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif