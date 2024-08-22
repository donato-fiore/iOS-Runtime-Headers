// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKASSERTIONMANAGER_H
#define NPKASSERTIONMANAGER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKAssertionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain) NSHashTable *acquiredAssertions; // ivar: _acquiredAssertions


+(id)sharedManager;
-(BOOL)containsAssertionWithType:(NSUInteger)arg0 ;
-(id)_errorWithUnderlyingError:(id)arg0 ;
-(id)acquiredAssertionWithType:(NSUInteger)arg0 ;
-(id)init;
-(void)_queue_acquireAssertionWithType:(NSUInteger)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)_queue_invalidateAssertionWithType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)acquireAssertionWithType:(NSUInteger)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)addAssertion:(id)arg0 ;
-(void)invalidateAssertionWithType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)removeAssertion:(id)arg0 ;


@end


#endif