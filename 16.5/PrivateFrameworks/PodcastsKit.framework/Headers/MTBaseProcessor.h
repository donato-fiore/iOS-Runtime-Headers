// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTBASEPROCESSOR_H
#define MTBASEPROCESSOR_H

@class MTBaseQueryObserver;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTDefaultsChangeNotifier.h"

@interface MTBaseProcessor : NSObject {
    BOOL _isStopping;
}


@property (retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // ivar: _defaultsNotifier
@property (nonatomic) BOOL isStopping;
@property (retain, nonatomic) NSObject *isStoppingLock; // ivar: _isStoppingLock
@property (retain, nonatomic) MTBaseQueryObserver *queryObserver; // ivar: _queryObserver
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
+(void)initialize;
-(BOOL)isRunning;
-(BOOL)start;
-(CGFloat)updatePredicateDuration;
-(id)createQueryObserver;
-(id)defaultPropertiesThatAffectPredicate;
-(id)entityName;
-(id)init;
-(id)predicate;
-(void)enqueueWorkBlock:(id)arg0 ;
-(void)results:(id)arg0 ;
-(void)resultsChangedWithDeletedIds:(id)arg0 insertIds:(id)arg1 updatedIds:(id)arg2 ;
-(void)stop;
-(void)updatePredicate;


@end


#endif