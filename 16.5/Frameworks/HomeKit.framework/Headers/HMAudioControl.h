// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMAUDIOCONTROL_H
#define HMAUDIOCONTROL_H

@class NSString, NSUUID;
@protocol _HMAudioControlDelegate, HMObjectMerge, HMAudioControlDelegate;

#import <Foundation/Foundation.h>

#import "_HMAudioControl.h"
#import "HMMediaSession.h"

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge>



@property (retain, nonatomic) _HMAudioControl *audioControl; // ivar: _audioControl
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAudioControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMMediaSession *mediaSession; // ivar: _mediaSession
@property (getter=isMuted) BOOL muted;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property float volume;


-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithMediaSession:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 ;
-(void)_unconfigure;
-(void)audioControl:(id)arg0 didUpdateMuted:(BOOL)arg1 ;
-(void)audioControl:(id)arg0 didUpdateVolume:(float)arg1 ;
-(void)updateMuted:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateVolume:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif