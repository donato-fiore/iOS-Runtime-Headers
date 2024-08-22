// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLALERT_H
#define TLALERT_H

@class NSString;
@protocol TLAlertPlaybackObserver;

#import <Foundation/Foundation.h>

#import "TLAlertConfiguration.h"

@interface TLAlert : NSObject {
    NSInteger _instanceIndex;
}


@property (readonly, nonatomic) BOOL _hasSynchronizedVibrationUnmatchedWithTone; // ivar: _hasSynchronizedVibrationUnmatchedWithTone
@property (readonly, nonatomic) TLAlertConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<TLAlertPlaybackObserver> *playbackObserver; // ivar: _playbackObserver
@property (readonly, nonatomic) NSString *toneIdentifier; // ivar: _toneIdentifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *vibrationIdentifier; // ivar: _vibrationIdentifier


+(BOOL)_stopAllAlerts;
+(BOOL)_watchPrefersSalientToneAndVibration;
+(NSInteger)_currentOverridePolicyForType:(NSInteger)arg0 ;
+(id)alertWithConfiguration:(id)arg0 ;
+(void)_setCurrentOverridePolicy:(NSInteger)arg0 forType:(NSInteger)arg1 ;
+(void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg0 ;
+(void)playAlertForType:(NSInteger)arg0 ;
+(void)playToneAndVibrationForType:(NSInteger)arg0 ;
// -(BOOL)playWithCompletionHandler:(id)arg0 targetQueue:(unk)arg1  ;
-(id)_descriptionForDebugging:(BOOL)arg0 ;
-(id)_initWithConfiguration:(id)arg0 toneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 hasSynchronizedVibrationUnmatchedWithTone:(BOOL)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 accountIdentifier:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 toneIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 ;
-(void)_updateAudioVolumeDynamicallyToValue:(float)arg0 ;
-(void)play;
-(void)playWithCompletionHandler:(id)arg0 ;
-(void)preheatWithCompletionHandler:(id)arg0 ;
-(void)stop;
-(void)stopWithOptions:(id)arg0 ;


@end


#endif