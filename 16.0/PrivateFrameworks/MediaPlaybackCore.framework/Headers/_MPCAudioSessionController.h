// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCAUDIOSESSIONCONTROLLER_H
#define _MPCAUDIOSESSIONCONTROLLER_H

@class AVAudioSession, NSString;

#import <Foundation/Foundation.h>


@interface _MPCAudioSessionController : NSObject

@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) NSString *category; // ivar: _category
@property (nonatomic) NSUInteger categoryOptions; // ivar: _categoryOptions
@property (retain, nonatomic) id *lostObserver; // ivar: _lostObserver
@property (retain, nonatomic) id *resetObserver; // ivar: _resetObserver
@property (nonatomic) NSUInteger routeSharingPolicy; // ivar: _routeSharingPolicy


-(id)init;
-(void)dealloc;
-(void)restoreSessionSettingsFromSnapshot;
-(void)setupObservations;
-(void)snapshotSessionSettings;
-(void)tearDownObservations;
-(void)updateAudioSession:(id)arg0 options:(NSUInteger)arg1 routeSharingPolicy:(NSUInteger)arg2 ;


@end


#endif