// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFRAGMENTEDASSETSARRAY_H
#define AVFRAGMENTEDASSETSARRAY_H

@class NSArray, NSMutableDictionary;



@interface AVFragmentedAssetsArray : NSArray {
    NSUInteger _count;
    NSUInteger _firstSequenceNumber;
    NSMutableDictionary *_cachedFragments;
}




-(NSUInteger)count;
-(id)init;
-(id)initWithCount:(NSUInteger)arg0 firstSequenceNumber:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif