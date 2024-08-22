// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTRANSITIONPRODUCERSEGMENT_H
#define PXSTORYTRANSITIONPRODUCERSEGMENT_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface PXStoryTransitionProducerSegment : NSObject {
    NSMutableArray *_clipLayouts;
    *? _infos;
    NSInteger _capacity;
    NSInteger _count;
}


@property (readonly, copy, nonatomic) NSArray *clipLayouts;
@property (readonly, nonatomic) ? segmentInfo; // ivar: _segmentInfo


-(BOOL)isValidTransitionForKind:(char)arg0 otherSegment:(id)arg1 ;
-(id)initWithSegmentInfo:(struct ? )arg0 ;
-(void)addClipWithIdentifier:(NSInteger)arg0 layout:(id)arg1 info:(struct ? )arg2 ;
-(void)dealloc;
-(void)enumerateClipsUsingBlock:(id)arg0 ;


@end


#endif