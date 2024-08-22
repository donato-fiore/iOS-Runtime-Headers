// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISOUND_H
#define SBUISOUND_H

@class NSString, TLAlert, NSDictionary;

#import <Foundation/Foundation.h>


@interface SBUISound : NSObject {
    id *_completionBlock;
}


@property (nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // ivar: _resolvedSystemSoundID
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSString *songPath; // ivar: _songPath
@property (nonatomic) NSUInteger soundBehavior; // ivar: _soundBehavior
@property (nonatomic) NSInteger soundType; // ivar: _soundType
@property (nonatomic) unsigned int systemSoundID; // ivar: _systemSoundID
@property (retain, nonatomic) TLAlert *toneAlert; // ivar: _toneAlert
@property (retain, nonatomic) NSDictionary *vibrationPattern; // ivar: _vibrationPattern


+(id)soundWithFeedbackEventType:(NSInteger)arg0 ;
-(BOOL)isPlaying;
-(BOOL)playInEvironments:(NSInteger)arg0 completion:(id)arg1 ;
-(id)_completionBlock:(SEL)arg0 ;
-(id)description;
-(id)initWithFeedbackEventType:(NSInteger)arg0 ;
-(id)initWithSystemSoundID:(unsigned int)arg0 behavior:(NSUInteger)arg1 vibrationPattern:(id)arg2 ;
-(id)initWithSystemSoundPath:(id)arg0 behavior:(NSUInteger)arg1 vibrationPattern:(id)arg2 ;
-(id)initWithToneAlert:(NSInteger)arg0 accountIdentifier:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(id)initWithToneAlert:(id)arg0 ;
-(id)initWithToneAlertConfiguration:(id)arg0 ;
-(void)_setCompletionBlock:(id)arg0 ;
-(void)stop;


@end


#endif