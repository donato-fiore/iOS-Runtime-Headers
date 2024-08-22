// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPFEATUREFLAGUTILITY_H
#define RPFEATUREFLAGUTILITY_H


#import <Foundation/Foundation.h>


@interface RPFeatureFlagUtility : NSObject {
    BOOL _stereoAudioControlCenter;
    BOOL _systemBannerEnabled;
    BOOL _screenRecordingCameraPip;
}


@property (readonly, nonatomic) BOOL alwaysOnDisplayEnabled; // ivar: _alwaysOnDisplayEnabled
@property (readonly, nonatomic) BOOL screenRecordingCameraPip;
@property (readonly, nonatomic) BOOL stereoAudioControlCenter;
@property (readonly, nonatomic) BOOL systemBannerEnabled;


+(id)sharedInstance;
-(id)init;


@end


#endif