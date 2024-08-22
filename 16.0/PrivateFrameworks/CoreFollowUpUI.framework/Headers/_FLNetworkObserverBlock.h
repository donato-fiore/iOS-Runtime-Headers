// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FLNETWORKOBSERVERBLOCK_H
#define _FLNETWORKOBSERVERBLOCK_H


#import <Foundation/Foundation.h>

#import "FLNetworkObserver.h"

@interface _FLNetworkObserverBlock : NSObject {
    id *_block;
    FLNetworkObserver *_networkObserver;
}




// -(id)_initWithBlock:(id)arg0 networkObserver:(unk)arg1  ;
-(void)dealloc;
-(void)executeBlock;


@end


#endif