// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKJOINGROUP_H
#define GKJOINGROUP_H

@class NSError, NSMutableArray, NSLock, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface GKJoinGroup : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}


@property (retain) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *leftNotifiers; // ivar: _leftNotifiers
@property (retain) NSMutableArray *leftResults; // ivar: _leftResults
@property (retain) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *rightNotifiers; // ivar: _rightNotifiers
@property (retain) NSMutableArray *rightResults; // ivar: _rightResults


+(id)joinGroup;
+(id)joinGroupForTargetQueue:(id)arg0 ;
+(id)joinGroupWithName:(id)arg0 ;
+(id)joinGroupWithName:(id)arg0 taregetQueue:(id)arg1 ;
-(id)initWithName:(id)arg0 targetQueue:(id)arg1 ;
-(void)_join:(id)arg0 ;
-(void)aggregateJoin:(id)arg0 ;
-(void)aggregateJoinLeft:(id)arg0 ;
-(void)aggregateJoinRight:(id)arg0 ;
-(void)applyUpdates;
-(void)dealloc;
-(void)join:(id)arg0 ;
-(void)joinLeft:(id)arg0 ;
-(void)joinRight:(id)arg0 ;
-(void)performLeft:(id)arg0 ;
-(void)performLeftOnQueue:(id)arg0 block:(id)arg1 ;
-(void)performRight:(id)arg0 ;
-(void)performRightOnQueue:(id)arg0 block:(id)arg1 ;
-(void)wait;


@end


#endif