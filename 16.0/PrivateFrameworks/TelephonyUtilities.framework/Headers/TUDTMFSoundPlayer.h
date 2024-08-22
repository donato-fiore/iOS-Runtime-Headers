// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUDTMFSOUNDPLAYER_H
#define TUDTMFSOUNDPLAYER_H


#import <Foundation/Foundation.h>


@interface TUDTMFSoundPlayer : NSObject

@property (copy, nonatomic) id *playSystemSoundHandler; // ivar: _playSystemSoundHandler


-(BOOL)attemptToPlayKey:(unsigned char)arg0 ;
-(id)init;
-(void)attemptToPlaySoundType:(NSInteger)arg0 ;


@end


#endif