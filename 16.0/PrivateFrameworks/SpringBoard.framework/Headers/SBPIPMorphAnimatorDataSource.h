// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPMORPHANIMATORDATASOURCE_H
#define SBPIPMORPHANIMATORDATASOURCE_H

@class NSString, PGPictureInPictureController;
@protocol SBViewMorphAnimatorDataSource;

#import <Foundation/Foundation.h>

#import "SBPIPContentViewLayoutSettings.h"
#import "SBPIPController.h"

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>



@property (retain, nonatomic) SBPIPContentViewLayoutSettings *contentViewLayoutSettings; // ivar: _contentViewLayoutSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGestureInitiated) BOOL gestureInitiated; // ivar: _gestureInitiated
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PGPictureInPictureController *pegasusController; // ivar: _pegasusController
@property (retain, nonatomic) SBPIPController *pipController; // ivar: _pipController
@property (retain, nonatomic) NSString *scenePersistenceIdentifier; // ivar: _scenePersistenceIdentifier
@property (readonly) Class superclass;
@property (nonatomic) int targetProcessIdentifier; // ivar: _targetProcessIdentifier


-(CGFloat)sourceBlackCurtainCornerRadiusForAnimator:(id)arg0 ;
-(CGFloat)sourceCornerRadiusForAnimator:(id)arg0 ;
-(CGFloat)targetFinalCornerRadiusForAnimator:(id)arg0 ;
-(id)initWithTargetProcessIdentifier:(int)arg0 scenePersistenceIdentifier:(id)arg1 gestureInitiated:(BOOL)arg2 pipController:(id)arg3 pegasusController:(id)arg4 contentViewLayoutSettings:(id)arg5 ;
-(struct CGRect )sourceAppLayoutFrameForAnimator:(id)arg0 ;
-(struct CGRect )sourceContentFrameForAnimator:(id)arg0 ;
-(struct CGRect )targetFinalFrameForAnimator:(id)arg0 ;


@end


#endif