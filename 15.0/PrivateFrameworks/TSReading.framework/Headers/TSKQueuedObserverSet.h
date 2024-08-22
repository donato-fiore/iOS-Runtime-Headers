// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKQUEUEDOBSERVERSET_H
#define TSKQUEUEDOBSERVERSET_H


#import <Foundation/Foundation.h>


@interface TSKQueuedObserverSet : NSObject {
    int mChangeType;
    id *mObserver;
    id *mChangeSource;
    BOOL mIsClass;
}




+(id)queuedObserverSetWithChangeType:(int)arg0 observer:(id)arg1 changeSource:(id)arg2 isClass:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif