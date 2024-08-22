// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SANPVIDEOTURNONSUBTITLES_H
#define SANPVIDEOTURNONSUBTITLES_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredOptionId;
@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;


+(id)turnOnSubtitles;
+(id)turnOnSubtitlesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif