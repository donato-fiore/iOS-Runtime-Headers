// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVAVPLAYERFACTORY_H
#define SVAVPLAYERFACTORY_H

@class NSString;
@protocol SVAVPlayerFactory, SVAVPlayerItemFactory;

#import <Foundation/Foundation.h>


@interface SVAVPlayerFactory : NSObject <SVAVPlayerFactory>



@property (readonly, nonatomic) int audioMode; // ivar: _audioMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SVAVPlayerItemFactory> *playerItemFactory; // ivar: _playerItemFactory
@property (readonly) Class superclass;


-(id)createPlayerWithURL:(id)arg0 ;
-(id)initWithAudioMode:(int)arg0 playerItemFactory:(id)arg1 ;


@end


#endif