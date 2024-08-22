// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANPVIDEOSETAUDIOTRACK_H
#define SANPVIDEOSETAUDIOTRACK_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredOptionId;
@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;


+(id)setAudioTrack;
+(id)setAudioTrackWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif