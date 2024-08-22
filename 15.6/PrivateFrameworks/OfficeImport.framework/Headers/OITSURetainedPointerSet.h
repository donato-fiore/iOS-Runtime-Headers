// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSURETAINEDPOINTERSET_H
#define OITSURETAINEDPOINTERSET_H



#import "OITSUPointerSet.h"

@interface OITSURetainedPointerSet : OITSUPointerSet



+(Class)privateMutableClass;
+(Class)privateNonMutableClass;
-(id)allObjects;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif