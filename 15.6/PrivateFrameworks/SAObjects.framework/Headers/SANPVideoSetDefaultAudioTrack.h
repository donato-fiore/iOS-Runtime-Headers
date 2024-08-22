// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPVIDEOSETDEFAULTAUDIOTRACK_H
#define SANPVIDEOSETDEFAULTAUDIOTRACK_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;


+(id)setDefaultAudioTrack;
+(id)setDefaultAudioTrackWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif