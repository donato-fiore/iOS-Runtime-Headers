// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCPCSCHAINENUMERATOR_H
#define BRCPCSCHAINENUMERATOR_H

@class NSEnumerator, NSMutableArray, NSError;


#import "BRCPrivateClientZone.h"

@interface BRCPCSChainEnumerator : NSEnumerator {
    NSUInteger _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
}




-(id)error;
-(id)initWithPCSChainInfo:(id)arg0 clientZone:(id)arg1 ;
-(id)nextObject;


@end


#endif