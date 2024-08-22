// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONMODEL_H
#define PXSTORYTRANSITIONMODEL_H


#import <Foundation/Foundation.h>


@interface PXStoryTransitionModel : NSObject {
    *? _clipInfos;
    NSInteger _capacity;
    NSInteger _count;
}


@property (readonly, nonatomic) ? orderInCompositionInfo; // ivar: _orderInCompositionInfo
@property (readonly, nonatomic) ? orderOutCompositionInfo; // ivar: _orderOutCompositionInfo
@property (readonly, nonatomic) ? segmentTransitionInfo; // ivar: _segmentTransitionInfo
@property (readonly, nonatomic) ? transitionInfo; // ivar: _transitionInfo


-(id)initWithSegmentTransitionInfo:(struct ? )arg0 orderOutCompositionInfo:(struct ? )arg1 orderInCompositionInfo:(struct ? )arg2 transitionInfo:(struct ? )arg3 ;
-(void)addClipWithIdentifier:(NSInteger)arg0 info:(struct ? )arg1 event:(NSInteger)arg2 ;
-(void)dealloc;
-(void)enumerateClipIdentifiersUsingBlock:(id)arg0 ;


@end


#endif