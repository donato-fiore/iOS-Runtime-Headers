// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYANIMATIONCONTROLLER_H
#define PXSTORYANIMATIONCONTROLLER_H

@class NSMutableDictionary, NSCountedSet;
@protocol PXStoryMutableAnimationController;


#import "PXStoryController.h"
#import "PXStoryModel.h"

@interface PXStoryAnimationController : PXStoryController <PXStoryMutableAnimationController>

 {
    NSMutableDictionary *_animationInfoByIdentifier;
    NSCountedSet *_checkOutCountsByIdentifier;
    BOOL _isUpdatingAnimations;
}


@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model


-(id)checkOutAnimationWithIdentifier:(id)arg0 creationBlock:(id)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithObservableModel:(id)arg0 ;
-(void)_configureAnimation:(id)arg0 withAnimationInfo:(id)arg1 ;
-(void)_handleAnimationInvalidation;
-(void)_invalidateAnimations;
-(void)_updateAnimations;
-(void)addAnimation:(id)arg0 ;
-(void)checkInAnimation:(id)arg0 ;
-(void)configureUpdater:(id)arg0 ;
-(void)enumerateAnimationsUsingBlock:(id)arg0 ;
-(void)handleModelChange:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif