// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRNOWPLAYINGAUDIOFORMATCONTROLLER_H
#define MRNOWPLAYINGAUDIOFORMATCONTROLLER_H

@class NSString;
@protocol MRNowPlayingAudioFormatControllerDelegate;

#import <Foundation/Foundation.h>

#import "MRNowPlayingAudioFormatContentInfo.h"

@interface MRNowPlayingAudioFormatController : NSObject

@property (readonly, nonatomic) MRNowPlayingAudioFormatContentInfo *audioFormatContentInfo; // ivar: _audioFormatContentInfo
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, nonatomic) NSInteger bestAvailableAudioFormat;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (weak, nonatomic) NSObject<MRNowPlayingAudioFormatControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;
@property (readonly, nonatomic) BOOL hasNowPlayingApp;
@property (nonatomic) BOOL isUpdating; // ivar: _isUpdating
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (nonatomic) BOOL pendingUpdate; // ivar: _pendingUpdate


-(id)description;
-(id)init;
-(void)nowPlayingApplicationDidChange:(id)arg0 ;
-(void)sourceFormatDidChange:(id)arg0 ;
-(void)updateAudioFormatForClient:(id)arg0 contentInfo:(id)arg1 reason:(id)arg2 ;
-(void)updateAudioFormatWithReason:(id)arg0 ;
-(void)updateNotifications;


@end


#endif