// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAYERKVOHELPER_H
#define PLAYERKVOHELPER_H

@class AVPlayer;

#import <Foundation/Foundation.h>


@interface PlayerKVOHelper : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) AVPlayer *player; // ivar: _player


-(id)initWithPlayer:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif