// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPAUDIOPLAYBUTTONSTYLE_H
#define LPAUDIOPLAYBUTTONSTYLE_H


#import <Foundation/Foundation.h>

#import "LPAudioPlayButtonTheme.h"
#import "LPPointUnit.h"
#import "LPSize.h"

@interface LPAudioPlayButtonStyle : NSObject

@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *appleMusicTheme; // ivar: _appleMusicTheme
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *audioBookTheme; // ivar: _audioBookTheme
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *defaultTheme; // ivar: _defaultTheme
@property (retain, nonatomic) LPPointUnit *glyphSize; // ivar: _glyphSize
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *lyricExcerptTheme; // ivar: _lyricExcerptTheme
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *podcastsTheme; // ivar: _podcastsTheme
@property (retain, nonatomic) LPSize *size; // ivar: _size


-(id)init;


@end


#endif