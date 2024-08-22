// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDIOSESSIONDELEGATE_H
#define AUDIOSESSIONDELEGATE_H

@class NSString;
@protocol AVAudioSessionDelegate;

#import <Foundation/Foundation.h>


@interface AudioSessionDelegate : NSObject <AVAudioSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interruptions; // ivar: _interruptions
@property (nonatomic) BOOL isUsingAudioInput; // ivar: _isUsingAudioInput
@property (nonatomic) BOOL isUsingSpeaker; // ivar: _isUsingSpeaker
@property (nonatomic) BOOL preventSessionChanges; // ivar: _preventSessionChanges
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)becomeActiveWithWantsAudioInput:(BOOL)arg0 ;
-(BOOL)becomeInactive;
-(BOOL)inputIsAvailable;
-(float)sliderToDB:(float)arg0 ;
-(float)volumeDBtoSlider:(float)arg0 ;
-(id)init;
-(void)beginInterruption;
-(void)dealloc;
-(void)endInterruptionWithFlags:(NSUInteger)arg0 ;
-(void)ignoreInterruptionsMode;
-(void)inputIsAvailableChanged:(BOOL)arg0 ;
-(void)normalInterruptionsMode;
-(void)routeDidChange;
-(void)sdf;


@end


#endif