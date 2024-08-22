// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKSOUNDEFFECT_H
#define OKSOUNDEFFECT_H


#import <Foundation/Foundation.h>


@interface OKSoundEffect : NSObject {
    unsigned int _soundID;
}




+(id)soundEffectAtURL:(id)arg0 ;
+(void)playSoundEffectAtURL:(id)arg0 ;
-(id)initWithSoundURL:(id)arg0 ;
-(void)dealloc;
-(void)play;


@end


#endif