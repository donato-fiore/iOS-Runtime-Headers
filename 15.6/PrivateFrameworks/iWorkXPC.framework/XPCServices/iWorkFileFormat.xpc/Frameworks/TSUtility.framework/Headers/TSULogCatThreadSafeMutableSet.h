// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSULOGCATTHREADSAFEMUTABLESET_H
#define TSULOGCATTHREADSAFEMUTABLESET_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}




-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)count;
-(id)allObjects;
-(id)description;
-(id)immutableSet;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif