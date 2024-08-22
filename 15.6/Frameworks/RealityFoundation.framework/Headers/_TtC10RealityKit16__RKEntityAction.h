// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10REALITYKIT16__RKENTITYACTION_H
#define _TTC10REALITYKIT16__RKENTITYACTION_H

@class SwiftObject;
@protocol NSCopying;



@interface _TtC10RealityKit16__RKEntityAction : SwiftObject <NSCopying>

 {
    ? targetEntity;
    ? targetEntityEngine;
    ? finishedHandler;
    ? groupHandler;
    ? stateObservers;
    ? completionHandler;
    ? isAlternate;
    ? isExclusive;
    ? exclusiveBlocksForCompletion;
    ? state;
    ? multiplePerformBehaviour;
}




-(id)copyWithZone:(*void)arg0 ;


@end


#endif