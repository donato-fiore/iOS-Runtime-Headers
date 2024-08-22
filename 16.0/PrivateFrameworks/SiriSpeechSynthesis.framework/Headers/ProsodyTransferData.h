// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PROSODYTRANSFERDATA_H
#define PROSODYTRANSFERDATA_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "UserVoiceProfile.h"

@interface ProsodyTransferData : NSObject

@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) UserVoiceProfile *userVoiceProfile; // ivar: _userVoiceProfile
@property (retain, nonatomic) NSString *userVoiceProfileUrl; // ivar: _userVoiceProfileUrl
@property (retain, nonatomic) NSData *waveData; // ivar: _waveData


-(id)init;


@end


#endif