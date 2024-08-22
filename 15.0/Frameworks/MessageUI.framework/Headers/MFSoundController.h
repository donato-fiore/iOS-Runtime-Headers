// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFSOUNDCONTROLLER_H
#define MFSOUNDCONTROLLER_H


#import <Foundation/Foundation.h>


@interface MFSoundController : NSObject



+(id)lazyAlertWithType:(NSInteger)arg0 topic:(id)arg1 ;
+(void)_playAlertWithType:(NSInteger)arg0 topic:(id)arg1 ;
+(void)playNewMailSoundStyle:(NSUInteger)arg0 forAccount:(id)arg1 ;
+(void)playSentMailSound;


@end


#endif