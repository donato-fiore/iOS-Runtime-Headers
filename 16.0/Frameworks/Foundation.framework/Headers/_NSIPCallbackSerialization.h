// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSIPCALLBACKSERIALIZATION_H
#define _NSIPCALLBACKSERIALIZATION_H


#import <Foundation/Foundation.h>

#import "NSUUID.h"

@interface _NSIPCallbackSerialization : NSObject {
    id *_endBlock;
    uint8_t _hasBegun;
    uint8_t _hasEnded;
    NSUUID *_UUID;
}




-(id)init;
-(void)dealloc;


@end


#endif