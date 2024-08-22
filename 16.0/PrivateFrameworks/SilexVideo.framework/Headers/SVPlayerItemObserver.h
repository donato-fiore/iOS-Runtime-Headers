// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVPLAYERITEMOBSERVER_H
#define SVPLAYERITEMOBSERVER_H

@class NSString, AVPlayerItem, AVPlayer;
@protocol SVPlayerItemObserving;

#import <Foundation/Foundation.h>

#import "SVKeyValueObserver.h"

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving>



@property (copy, nonatomic, setter=onChange:) id *changeBlock; // ivar: _changeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) AVPlayerItem *item; // ivar: _item
@property (readonly, nonatomic) SVKeyValueObserver *observer; // ivar: _observer
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly) Class superclass;


-(id)initWithPlayer:(id)arg0 ;
-(void)onChange:(id)arg0 ;


@end


#endif