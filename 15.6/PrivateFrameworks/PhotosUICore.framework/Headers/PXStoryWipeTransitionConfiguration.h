// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYWIPETRANSITIONCONFIGURATION_H
#define PXSTORYWIPETRANSITIONCONFIGURATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXStoryWipeTransitionConfiguration : NSObject {
    NSMutableArray *_clipLayouts;
    *? _sourceStates;
    *? _targetStates;
    *? _primaryDividerInfos;
    *? _secondaryDividerInfos;
    NSInteger _capacity;
    NSInteger _count;
}


@property (nonatomic) CGFloat dividerWidth; // ivar: _dividerWidth
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (nonatomic) CGSize viewportSize; // ivar: _viewportSize


-(id)init;
-(id)initWithDuration:(struct ? )arg0 ;
-(void)addClipLayout:(id)arg0 configurationBlock:(id)arg1 ;
-(void)dealloc;
-(void)enumerateLayoutsUsingBlock:(id)arg0 ;


@end


#endif