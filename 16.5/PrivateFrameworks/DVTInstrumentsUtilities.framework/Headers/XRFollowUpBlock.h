// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRFOLLOWUPBLOCK_H
#define XRFOLLOWUPBLOCK_H

@class NSOperation;

#import <Foundation/Foundation.h>

#import "XRFollowUpBlock.h"

@interface XRFollowUpBlock : NSObject {
    id *_block;
    NSOperation *_op;
    XRFollowUpBlock *_myselfOrNil;
    atomic<int> _shouldntExecuteBlock;
}




// -(id)initWithBlock:(id)arg0 operation:(unk)arg1  ;
-(void)go;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif