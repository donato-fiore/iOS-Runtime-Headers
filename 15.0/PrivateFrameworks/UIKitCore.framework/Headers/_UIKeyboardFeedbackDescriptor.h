// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYBOARDFEEDBACKDESCRIPTOR_H
#define _UIKEYBOARDFEEDBACKDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIKeyboardFeedbackDescriptor : NSObject

@property (copy, nonatomic) NSString *audioFile; // ivar: _audioFile
@property (nonatomic) float audioVolume; // ivar: _audioVolume
@property (nonatomic) float hapticIntensity; // ivar: _hapticIntensity
@property (nonatomic) float hapticSharpness; // ivar: _hapticSharpness


+(id)descriptorWithIntensity:(float)arg0 sharpness:(float)arg1 audio:(id)arg2 volume:(float)arg3 ;


@end


#endif