// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKUPDATEGROUP_H
#define GKUPDATEGROUP_H

@class NSError, NSLock, NSString, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface GKUpdateGroup : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}


@property (retain) NSError *error; // ivar: _error
@property (retain) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *notifiers; // ivar: _notifiers
@property (readonly, nonatomic) NSInteger updateCount;


+(id)updateGroup;
+(id)updateGroupForTargetQueue:(id)arg0 ;
+(id)updateGroupWithName:(id)arg0 ;
+(id)updateGroupWithName:(id)arg0 taregetQueue:(id)arg1 ;
-(id)initWithName:(id)arg0 targetQueue:(id)arg1 ;
-(void)applyUpdates;
-(void)cancelUpdates;
-(void)dealloc;
-(void)join:(id)arg0 ;
-(void)joinAndApplyUpdates;
-(void)joinApplyUpdatesAndDo:(id)arg0 ;
-(void)perform:(id)arg0 ;
-(void)performOnQueue:(id)arg0 block:(id)arg1 ;
-(void)wait;


@end


#endif