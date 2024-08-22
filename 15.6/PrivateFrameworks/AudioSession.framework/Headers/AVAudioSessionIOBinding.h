// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOSESSIONIOBINDING_H
#define AVAUDIOSESSIONIOBINDING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVAudioSession.h"

@interface AVAudioSessionIOBinding : NSObject

@property (readonly, nonatomic) AVAudioSession *session; // ivar: _session
@property (readonly, nonatomic) NSArray *streams; // ivar: _streams


-(id)description;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSession:(id)arg0 streams:(id)arg1 error:(*id)arg2 ;


@end


#endif