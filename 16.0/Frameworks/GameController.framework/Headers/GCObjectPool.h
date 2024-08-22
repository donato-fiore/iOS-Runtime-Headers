// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCOBJECTPOOL_H
#define GCOBJECTPOOL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GCObjectPool : NSObject {
    NSMutableArray *objects;
    os_unfair_lock_s lock;
}




-(BOOL)addObjectWith:(id)arg0 ;
-(id)init;
-(id)takeObjectOrCreateWith:(id)arg0 ;


@end


#endif