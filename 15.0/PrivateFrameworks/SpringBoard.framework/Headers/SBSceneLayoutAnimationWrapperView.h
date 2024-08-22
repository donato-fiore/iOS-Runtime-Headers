// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENELAYOUTANIMATIONWRAPPERVIEW_H
#define SBSCENELAYOUTANIMATIONWRAPPERVIEW_H

@class UIView, NSString, NSArray;
@protocol SBSceneLayoutReferenceOrientedView;



@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elementWrapperViews;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) NSInteger referenceOrientation; // ivar: _referenceOrientation
@property (readonly) Class superclass;


-(id)elementWrapperViewForLayoutRole:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)crossfadeWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif