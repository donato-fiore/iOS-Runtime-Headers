// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMUTABLESET_H
#define AMSMUTABLESET_H

@class NSMutableSet;



@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}


@property (copy, nonatomic) id *hashBlock; // ivar: _hashBlock


+(id)setWithHashBlock:(id)arg0 ;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)count;
-(id)_allObjectsFromBackingSet;
-(id)allObjects;
-(id)anyObject;
-(id)initWithHashBlock:(id)arg0 ;
-(id)member:(id)arg0 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;


@end


#endif