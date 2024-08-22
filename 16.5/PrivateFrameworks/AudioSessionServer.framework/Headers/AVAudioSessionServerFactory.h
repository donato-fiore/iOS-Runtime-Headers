// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONSERVERFACTORY_H
#define AVAUDIOSESSIONSERVERFACTORY_H


#import <Foundation/Foundation.h>


@interface AVAudioSessionServerFactory : NSObject



+(id)createServer;
+(id)createServerWithAudioControlQueue:(id)arg0 delegate:(id)arg1 ;
+(id)createServerWithDelegate:(id)arg0 audioControlQueue:(id)arg1 ;


@end


#endif