// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANPVIDEOTURNOFFSUBTITLES_H
#define SANPVIDEOTURNOFFSUBTITLES_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SANPVideoTurnOffSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;


+(id)turnOffSubtitles;
+(id)turnOffSubtitlesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif