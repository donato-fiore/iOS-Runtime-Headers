// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCONCURRENTMUTABLEINDEXSET_H
#define TSTCONCURRENTMUTABLEINDEXSET_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface TSTConcurrentMutableIndexSet : NSObject {
    _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}




-(id)init;
-(void)addIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateIndexesUsingBlock:(id)arg0 ;
-(void)removeAllIndexes;


@end


#endif