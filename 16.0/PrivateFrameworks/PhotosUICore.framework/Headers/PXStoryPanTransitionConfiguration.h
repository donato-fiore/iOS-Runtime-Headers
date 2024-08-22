// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPANTRANSITIONCONFIGURATION_H
#define PXSTORYPANTRANSITIONCONFIGURATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXStoryPanTransitionConfiguration : NSObject {
    NSMutableArray *_clipLayouts;
    *CGRect _sourceRects;
    *CGRect _targetRects;
    NSInteger _capacity;
    NSInteger _count;
}


@property (readonly, nonatomic) ? duration; // ivar: _duration


-(id)init;
-(id)initWithDuration:(struct ? )arg0 ;
-(void)addClipLayout:(id)arg0 sourceRect:(struct CGRect )arg1 targetRect:(struct CGRect )arg2 ;
-(void)enumerateLayoutsUsingBlock:(id)arg0 ;


@end


#endif