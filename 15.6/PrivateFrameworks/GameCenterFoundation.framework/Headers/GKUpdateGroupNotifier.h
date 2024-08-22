// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKUPDATEGROUPNOTIFIER_H
#define GKUPDATEGROUPNOTIFIER_H

@class NSError, NSLock, NSMutableArray;

#import <Foundation/Foundation.h>

#import "GKUpdateGroup.h"

@interface GKUpdateGroupNotifier : NSObject

@property (retain) NSError *error; // ivar: _error
@property (weak, nonatomic) GKUpdateGroup *group; // ivar: _group
@property (retain) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *updateQueue; // ivar: _updateQueue


-(id)init;
-(id)retain;
// -(void)addUpdate:(id)arg0 error:(unk)arg1  ;
-(void)addUpdatesFromGroup:(id)arg0 ;
-(void)dealloc;
-(void)release;
-(void)updateError:(id)arg0 ;


@end


#endif