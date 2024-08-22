// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASESSIONMANAGER_H
#define PKDASESSIONMANAGER_H

@class NSMutableArray, NSString;
@protocol PKSessionDelegate, OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKDASession.h"

@interface PKDASessionManager : NSObject <PKSessionDelegate>

 {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    id *_sessionCreationBlock;
    PKDASession *_session;
    NSMutableArray *_workItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 sessionCreationBlock:(id)arg1 ;
-(void)createSession;
-(void)performBlockWithSession:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif