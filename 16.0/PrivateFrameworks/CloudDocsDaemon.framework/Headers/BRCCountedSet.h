// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCCOUNTEDSET_H
#define BRCCOUNTEDSET_H

@class NSCountedSet;



@interface BRCCountedSet : NSCountedSet {
    NSUInteger _totalCount;
}




-(NSUInteger)totalCount;
-(void)addObject:(id)arg0 ;
-(void)removeObject:(id)arg0 ;


@end


#endif