// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFDQRBETHREADSTACK_H
#define _PFDQRBETHREADSTACK_H


#import <Foundation/Foundation.h>

#import "_PFDQRBEThreadStack.h"

@interface _PFDQRBEThreadStack : NSObject {
    _PFDQRBEThreadStack *_next;
    NSUInteger _currentIndex;
    PFDispatchQueue" _activeQueues;
}




+(id)stackForCurrentThread;
+(void)initialize;
-(BOOL)containsQueue:(id)arg0 ;
-(BOOL)isEmpty;
-(void)popQueue;
-(void)pushQueue:(id)arg0 ;


@end


#endif