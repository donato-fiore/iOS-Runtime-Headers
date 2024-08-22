// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSATOMICSIGNAL_H
#define BSATOMICSIGNAL_H


#import <Foundation/Foundation.h>


@interface BSAtomicSignal : NSObject {
    uint8_t _flag;
}




-(BOOL)hasBeenSignalled;
-(BOOL)signal;
-(id)description;
-(id)init;


@end


#endif