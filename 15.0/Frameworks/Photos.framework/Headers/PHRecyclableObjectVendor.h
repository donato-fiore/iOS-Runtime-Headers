// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHRECYCLABLEOBJECTVENDOR_H
#define PHRECYCLABLEOBJECTVENDOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PHRecyclableObjectVendor : NSObject {
    NSMutableArray *_recycledObjects;
    Class _targetClass;
    os_unfair_lock_s _lock;
    BOOL _repsondsToPrepareForReuse;
    BOOL _threadSafe;
    id *_builder;
}




-(id)dequeueRecyclableObject;
-(id)initWithTargetClass:(Class)arg0 requiresThreadSafety:(BOOL)arg1 initialPoolSize:(NSInteger)arg2 ;
-(id)initWithTargetClass:(Class)arg0 requiresThreadSafety:(BOOL)arg1 initialPoolSize:(NSInteger)arg2 prototypeStep:(id)arg3 ;
-(void)recycleObject:(id)arg0 ;


@end


#endif