// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCKEYVALUESTORESAVEPOLICYTHROTTLE_H
#define FCKEYVALUESTORESAVEPOLICYTHROTTLE_H



#import "FCKeyValueStoreSavePolicy.h"

@interface FCKeyValueStoreSavePolicyThrottle : FCKeyValueStoreSavePolicy {
    CGFloat _delay;
}




-(id)initWithDelay:(CGFloat)arg0 ;
-(void)scheduleSaveOnQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif