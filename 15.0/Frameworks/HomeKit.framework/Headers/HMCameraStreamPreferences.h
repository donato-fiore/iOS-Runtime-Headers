// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASTREAMPREFERENCES_H
#define HMCAMERASTREAMPREFERENCES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMCameraStreamAudioPreferences.h"
#import "HMCameraStreamVideoPreferences.h"

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HMCameraStreamAudioPreferences *audioPreferences; // ivar: _audioPreferences
@property NSInteger minimumRequiredAvailableOrInUseStreams; // ivar: _minimumRequiredAvailableOrInUseStreams
@property (readonly, nonatomic) HMCameraStreamVideoPreferences *videoPreferences; // ivar: _videoPreferences


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAudioPreferences:(id)arg0 videoPreferences:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif