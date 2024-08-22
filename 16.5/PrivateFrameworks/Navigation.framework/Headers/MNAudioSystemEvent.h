// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNAUDIOSYSTEMEVENT_H
#define MNAUDIOSYSTEMEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MNAudioSystemEvent : NSObject

@property (readonly, nonatomic) NSUInteger guidanceLevel; // ivar: _guidanceLevel
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) BOOL hasSoundEffect;
@property (readonly, nonatomic) BOOL isPrivate; // ivar: _isPrivate
@property (readonly, nonatomic) NSUInteger shortPrompt; // ivar: _shortPrompt
@property (readonly, copy, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqualToEvent:(id)arg0 ;
-(id)description;
-(id)initWithUtterance:(id)arg0 andShortPrompt:(NSUInteger)arg1 andVoiceGuidanceLevel:(NSUInteger)arg2 andCompletion:(id)arg3 ;


@end


#endif