// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REFEATUREVALUECOUNTER_H
#define REFEATUREVALUECOUNTER_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface REFeatureValueCounter : NSObject {
    NSPointerArray *_values;
    REFancyShrinkingDictionary _indicies;
    _opaque_pthread_rwlock_t _lock;
}


@property (nonatomic) NSUInteger count; // ivar: _count


-(BOOL)readFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countForValue:(id)arg0 ;
-(NSUInteger)totalCount;
-(NSUInteger)trackedValueForValue:(id)arg0 ;
-(id)_createErrorWithCode:(NSUInteger)arg0 description:(id)arg1 underlyingError:(id)arg2 ;
-(id)init;
-(void)_updateConfigurationForCount:(NSUInteger)arg0 ;


@end


#endif