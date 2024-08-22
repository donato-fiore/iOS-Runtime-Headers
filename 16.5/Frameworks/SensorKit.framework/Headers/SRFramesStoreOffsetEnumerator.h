// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRFRAMESSTOREOFFSETENUMERATOR_H
#define SRFRAMESSTOREOFFSETENUMERATOR_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "SRFrameStore.h"

@interface SRFramesStoreOffsetEnumerator : NSObject <NSFastEnumeration>

 {
    SRFrameStore *_framesStore;
    NSUInteger _offset;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif