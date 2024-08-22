// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPVOCALSCONTROLCOMMAND_H
#define MPVOCALSCONTROLCOMMAND_H



#import "MPRemoteCommand.h"

@interface MPVocalsControlCommand : MPRemoteCommand

@property (nonatomic, getter=isContinuous) BOOL continuous; // ivar: _continuous
@property (nonatomic) float maxVocalsLevel; // ivar: _maxVocalsLevel
@property (nonatomic) float minVocalsLevel; // ivar: _minVocalsLevel
@property (nonatomic) BOOL vocalsControlActive; // ivar: _vocalsControlActive
@property (nonatomic) float vocalsLevel; // ivar: _vocalsLevel


-(id)_mediaRemoteCommandInfoOptions;


@end


#endif