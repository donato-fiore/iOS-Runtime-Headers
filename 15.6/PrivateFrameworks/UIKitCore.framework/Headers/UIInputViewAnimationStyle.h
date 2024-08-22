// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWANIMATIONSTYLE_H
#define UIINPUTVIEWANIMATIONSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIInputViewAnimationStyle : NSObject <NSCopying>

 {
    BOOL _isLegacy;
}


@property (nonatomic) BOOL animated; // ivar: animated
@property (readonly, nonatomic) BOOL canDismissWithScrollView;
@property (nonatomic) BOOL dontMerge; // ivar: _dontMerge
@property (nonatomic) CGFloat duration; // ivar: duration
@property (nonatomic) NSUInteger extraOptions; // ivar: extraOptions
@property (nonatomic) BOOL force; // ivar: force
@property (nonatomic) BOOL interactivelyCancelled; // ivar: interactivelyCancelled
@property (readonly, nonatomic) BOOL isAnimationCompleted;


+(id)animationStyleAnimated:(BOOL)arg0 duration:(CGFloat)arg1 ;
+(id)animationStyleDefault;
+(id)animationStyleImmediate;
-(BOOL)isEqual:(id)arg0 ;
-(id)controllerForStartPlacement:(id)arg0 endPlacement:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)endPlacementForInputViewSet:(id)arg0 ;
-(id)endPlacementForInputViewSet:(id)arg0 windowScene:(id)arg1 ;
-(id)legacyAnimationCopy;
-(id)startPlacementForInputViewSet:(id)arg0 currentPlacement:(id)arg1 ;
-(id)startPlacementForInputViewSet:(id)arg0 currentPlacement:(id)arg1 windowScene:(id)arg2 ;
// -(void)launchAnimation:(id)arg0 afterStarted:(unk)arg1 completion:(id)arg2 forHost:(unk)arg3 fromCurrentPosition:(id)arg4  ;


@end


#endif