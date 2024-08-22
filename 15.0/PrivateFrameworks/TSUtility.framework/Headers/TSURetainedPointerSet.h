// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSURETAINEDPOINTERSET_H
#define TSURETAINEDPOINTERSET_H



#import "TSUPointerSet.h"

@interface TSURetainedPointerSet : TSUPointerSet



+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)allObjects;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif