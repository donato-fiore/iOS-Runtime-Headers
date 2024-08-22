// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPPLAYBACKUSERDEFAULTS_H
#define MUSICKIT_SOFTLINKING_MPPLAYBACKUSERDEFAULTS_H

@class MPPlaybackUserDefaults;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject {
    MPPlaybackUserDefaults *_underlyingPlaybackUserDefaults;
}


@property (readonly, nonatomic) NSInteger preferredMusicLowBandwidthResolution;
@property (readonly, nonatomic) NSInteger preferredVideoLowBandwidthResolution;


+(id)preferredResolutionsDidChangeNotification;
+(id)standardUserDefaults;
-(id)_initWithUnderlyingPlaybackUserDefaults:(id)arg0 ;
-(void)_handlePreferredResolutionsDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif