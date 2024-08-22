// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDBCOMMONENTITYFUNCTIONALITYHANDLER_H
#define CDBCOMMONENTITYFUNCTIONALITYHANDLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDBCommonEntityFunctionalityHandler : NSObject

@property (retain, nonatomic) NSMutableSet *destructionObservers; // ivar: _destructionObservers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lock; // ivar: _lock


+(void)_notifyDestructionObservers:(id)arg0 ;
-(id)init;
-(void)addDestructionObserver:(struct CalRelation *)arg0 ;
-(void)dealloc;
-(void)notifyOfEntityDestruction;
-(void)removeDestructionObserver:(struct CalRelation *)arg0 ;


@end


#endif