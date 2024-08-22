// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERSCROLLVIEWATTRIBUTES_H
#define SBSWITCHERSCROLLVIEWATTRIBUTES_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) CGFloat decelerationRate; // ivar: _decelerationRate
@property (nonatomic) CGSize interpageSpacingForPaging; // ivar: _interpageSpacingForPaging
@property (nonatomic) BOOL interpolatesDuringSwipeToKill; // ivar: _interpolatesDuringSwipeToKill
@property (nonatomic) CGPoint pagingOrigin; // ivar: _pagingOrigin
@property (nonatomic) NSUInteger scrollAxis; // ivar: _scrollAxis
@property (nonatomic) BOOL scrollViewPagingEnabled; // ivar: _scrollViewPagingEnabled


-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif