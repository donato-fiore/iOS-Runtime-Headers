// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSCOPYINGCACHESET_H
#define BSCOPYINGCACHESET_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface BSCopyingCacheSet : NSObject {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}


@property (readonly) NSUInteger count;


-(BOOL)containsObject:(id)arg0 ;
-(id)description;
-(id)immutableSet;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif