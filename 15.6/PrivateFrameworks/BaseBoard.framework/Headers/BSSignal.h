// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSSIGNAL_H
#define BSSIGNAL_H


#import <Foundation/Foundation.h>


@interface BSSignal : NSObject {
    BOOL _signalled;
}




-(BOOL)hasBeenSignalled;
-(id)init;
-(void)reset;
-(void)signal;


@end


#endif