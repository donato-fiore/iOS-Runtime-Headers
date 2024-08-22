// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATHREADCALLTREE_H
#define SATHREADCALLTREE_H



#import "SACallTree.h"
#import "SADispatchQueue.h"
#import "SAThread.h"

@interface SAThreadCallTree : SACallTree

@property (readonly) SADispatchQueue *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) SAThread *thread; // ivar: _thread




@end


#endif