// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SPBUCKETSET_H
#define _SPBUCKETSET_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SPBucketSet : NSObject {
    *__CFDictionary _members;
}


@property NSInteger count; // ivar: _count
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSInteger)valueForKey:(id)arg0 ;
-(id)init;
-(void)addValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)decay:(NSInteger)arg0 ;
-(void)removeValueForKey:(id)arg0 ;


@end


#endif