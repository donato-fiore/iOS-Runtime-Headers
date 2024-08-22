// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PPTSTATE_H
#define _PPTSTATE_H

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _PPTState : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    int _enteredCount;
}


@property BOOL hasRendered; // ivar: _hasRendered
@property (retain) NSMutableArray *renderStatistics; // ivar: _renderStatistics


-(id)init;
-(void)enterDispatchGroup;
-(void)groupNotifyOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)leaveDispatchGroup;


@end


#endif