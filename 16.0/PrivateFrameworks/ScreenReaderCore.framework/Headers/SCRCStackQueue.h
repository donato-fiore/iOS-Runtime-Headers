// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCRCSTACKQUEUE_H
#define SCRCSTACKQUEUE_H


#import <Foundation/Foundation.h>

#import "_SCRCStackNode.h"

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    NSUInteger _count;
}




-(BOOL)isEmpty;
-(NSUInteger)count;
-(id)dequeueObject;
-(id)dequeueObjectRetained;
-(id)description;
-(id)objectEnumerator;
-(id)popObject;
-(id)popObjectRetained;
-(id)topObject;
-(void)_safeReleaseAllObjects;
-(void)dealloc;
-(void)enqueueObject:(id)arg0 ;
-(void)pushArray:(id)arg0 ;
-(void)pushObject:(id)arg0 ;
-(void)removeAllObjects;


@end


#endif