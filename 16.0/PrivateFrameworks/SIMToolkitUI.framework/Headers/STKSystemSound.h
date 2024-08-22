// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKSYSTEMSOUND_H
#define STKSYSTEMSOUND_H

@class NSString;
@protocol STKSound;


#import "STKBaseSound.h"

@interface STKSystemSound : STKBaseSound <STKSound>

 {
    unsigned int _systemSoundID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForSystemSoundID:(unsigned int)arg0 duration:(CGFloat)arg1 ;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;


@end


#endif