// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILINGSCROLLINFO_H
#define PUTILINGSCROLLINFO_H


#import <Foundation/Foundation.h>


@interface PUTilingScrollInfo : NSObject

@property (nonatomic, setter=_setInterpageSpacing:) CGSize interpageSpacing; // ivar: _interpageSpacing
@property (nonatomic, setter=_setPagingFrictionAdjustment:) CGFloat pagingFrictionAdjustment; // ivar: _pagingFrictionAdjustment
@property (nonatomic, setter=_setPagingSpringPullAdjustment:) CGFloat pagingSpringPullAdjustment; // ivar: _pagingSpringPullAdjustment
@property (nonatomic, setter=_setScrollDirections:) NSInteger scrollDirections; // ivar: _scrollDirections
@property (nonatomic, setter=_setShouldEnablePaging:) BOOL shouldEnablePaging; // ivar: _shouldEnablePaging


+(id)scrollInfoWithScrollDirections:(NSInteger)arg0 ;
+(id)scrollInfoWithScrollDirections:(NSInteger)arg0 enabledPagingWithInterpageSpacing:(struct CGSize )arg1 ;
+(id)scrollInfoWithScrollDirections:(NSInteger)arg0 enabledPagingWithInterpageSpacing:(struct CGSize )arg1 pagingSpringPullAdjustment:(CGFloat)arg2 pagingFrictionAdjustment:(CGFloat)arg3 ;


@end


#endif