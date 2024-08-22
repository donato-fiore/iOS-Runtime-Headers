// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKJOINGROUPNOTIFIER_H
#define GKJOINGROUPNOTIFIER_H

@class NSError, NSLock, NSMutableArray;

#import <Foundation/Foundation.h>

#import "GKJoinGroup.h"

@interface GKJoinGroupNotifier : NSObject

@property (retain) NSError *error; // ivar: _error
@property (weak, nonatomic) GKJoinGroup *group; // ivar: _group
@property (retain) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *updateQueue; // ivar: _updateQueue


-(id)init;
-(id)retain;
-(void)dealloc;
-(void)release;
// -(void)setResult:(id)arg0 error:(unk)arg1  ;


@end


#endif