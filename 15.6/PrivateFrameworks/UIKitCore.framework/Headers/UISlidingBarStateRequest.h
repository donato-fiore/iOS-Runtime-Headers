// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISLIDINGBARSTATEREQUEST_H
#define UISLIDINGBARSTATEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UISlidingBarStateRequest : NSObject <NSCopying>



@property (nonatomic) CGFloat leadingOffscreenWidth; // ivar: _leadingOffscreenWidth
@property (nonatomic) CGFloat leadingWidth; // ivar: _leadingWidth
@property (nonatomic) CGFloat mainWidth; // ivar: _mainWidth
@property (nonatomic) CGFloat rubberBandInset; // ivar: _rubberBandInset
@property (nonatomic) CGFloat supplementaryOffscreenWidth; // ivar: _supplementaryOffscreenWidth
@property (nonatomic) CGFloat supplementaryWidth; // ivar: _supplementaryWidth
@property (nonatomic) CGFloat trailingOffscreenWidth; // ivar: _trailingOffscreenWidth
@property (nonatomic) CGFloat trailingWidth; // ivar: _trailingWidth
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_closestEqualOrLargerState:(id)arg0 ;
-(id)_closestEqualOrLargerState:(id)arg0 returningDistance:(*CGFloat)arg1 ;
-(id)_closestState:(id)arg0 ;
-(id)_closestState:(id)arg0 returningDistance:(*CGFloat)arg1 ;
-(id)_matchingState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif