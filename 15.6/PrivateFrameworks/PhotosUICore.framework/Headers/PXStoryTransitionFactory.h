// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONFACTORY_H
#define PXSTORYTRANSITIONFACTORY_H


#import <Foundation/Foundation.h>


@interface PXStoryTransitionFactory : NSObject



+(id)effectTransitionWithInfo:(struct ? )arg0 entityManager:(id)arg1 ;
+(id)panTransitionWithConfiguration:(id)arg0 ;
+(id)segmentTransitionWithInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;
+(id)wipeTransitionWithConfiguration:(id)arg0 ;
+(struct ? )visibleOrderOutDurationForTransitionInfo:(struct ? )arg0 ;


@end


#endif