// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKTRANSITION_H
#define SKTRANSITION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKTransition : NSObject <NSCopying>

 {
    *void _skcTransitionNode;
}


@property (nonatomic) BOOL pausesIncomingScene;
@property (nonatomic) BOOL pausesOutgoingScene;


+(id)crossFadeWithDuration:(CGFloat)arg0 ;
+(id)doorsCloseHorizontalWithDuration:(CGFloat)arg0 ;
+(id)doorsCloseVerticalWithDuration:(CGFloat)arg0 ;
+(id)doorsOpenHorizontalWithDuration:(CGFloat)arg0 ;
+(id)doorsOpenVerticalWithDuration:(CGFloat)arg0 ;
+(id)doorwayWithDuration:(CGFloat)arg0 ;
+(id)fadeWithColor:(id)arg0 duration:(CGFloat)arg1 ;
+(id)fadeWithDuration:(CGFloat)arg0 ;
+(id)flipHorizontalWithDuration:(CGFloat)arg0 ;
+(id)flipVerticalWithDuration:(CGFloat)arg0 ;
+(id)moveInDownWithDuration:(CGFloat)arg0 ;
+(id)moveInLeftWithDuration:(CGFloat)arg0 ;
+(id)moveInRightWithDuration:(CGFloat)arg0 ;
+(id)moveInUpWithDuration:(CGFloat)arg0 ;
+(id)moveInWithDirection:(NSInteger)arg0 duration:(CGFloat)arg1 ;
+(id)pushDownWithDuration:(CGFloat)arg0 ;
+(id)pushLeftWithDuration:(CGFloat)arg0 ;
+(id)pushRightWithDuration:(CGFloat)arg0 ;
+(id)pushUpWithDuration:(CGFloat)arg0 ;
+(id)pushWithDirection:(NSInteger)arg0 duration:(CGFloat)arg1 ;
+(id)revealDownWithDuration:(CGFloat)arg0 ;
+(id)revealLeftWithDuration:(CGFloat)arg0 ;
+(id)revealRightWithDuration:(CGFloat)arg0 ;
+(id)revealUpWithDuration:(CGFloat)arg0 ;
+(id)revealWithDirection:(NSInteger)arg0 duration:(CGFloat)arg1 ;
+(id)transitionWithCIFilter:(id)arg0 duration:(CGFloat)arg1 ;
-(*void)_backingNode;
-(CGFloat)_duration;
-(id)_filter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif