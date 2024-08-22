// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPNONEVICTABLEITEMSQUERYDESCRIPTOR_H
#define FPNONEVICTABLEITEMSQUERYDESCRIPTOR_H



#import "FPSpotlightQueryDescriptor.h"

@interface FPNonEvictableItemsQueryDescriptor : FPSpotlightQueryDescriptor



-(NSUInteger)desiredCount;
-(id)name;
-(id)queryStringForMountPoint:(id)arg0 ;
-(void)augmentQueryContext:(id)arg0 ;


@end


#endif