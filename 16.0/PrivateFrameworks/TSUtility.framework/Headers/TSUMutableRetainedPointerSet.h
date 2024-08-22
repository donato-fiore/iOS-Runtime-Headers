// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUMUTABLERETAINEDPOINTERSET_H
#define TSUMUTABLERETAINEDPOINTERSET_H



#import "TSUMutablePointerSet.h"

@interface TSUMutableRetainedPointerSet : TSUMutablePointerSet



+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)allObjects;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;


@end


#endif