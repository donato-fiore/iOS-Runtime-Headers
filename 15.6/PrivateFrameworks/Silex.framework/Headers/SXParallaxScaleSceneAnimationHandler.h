// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPARALLAXSCALESCENEANIMATIONHANDLER_H
#define SXPARALLAXSCALESCENEANIMATIONHANDLER_H



#import "SXSceneComponentAnimationHandler.h"
#import "SXContainerComponentView.h"

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler

@property (nonatomic) NSUInteger attachmentType; // ivar: _attachmentType
@property (weak, nonatomic) SXContainerComponentView *headerComponent; // ivar: _headerComponent


-(BOOL)shouldFinishAtEndOfScrollView;
-(CGFloat)factorForVisibileBounds:(struct CGRect )arg0 andAbsoluteComponentRect:(struct CGRect )arg1 ;
-(struct CGRect )fillContentFrameForScale:(CGFloat)arg0 andTranslation:(CGFloat)arg1 ;
-(void)ensureScalabilityOfHeaderComponentFill;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(CGFloat)arg0 ;


@end


#endif