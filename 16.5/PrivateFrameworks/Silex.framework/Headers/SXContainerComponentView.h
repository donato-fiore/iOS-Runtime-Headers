// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCONTAINERCOMPONENTVIEW_H
#define SXCONTAINERCOMPONENTVIEW_H

@class NSArray, NSString;
@protocol SXDragManagerDataSource, SXComponentHosting, SXMediaSharingPolicyProvider;


#import "SXComponentView.h"
#import "SXDragManager.h"

@interface SXContainerComponentView : SXComponentView <SXDragManagerDataSource, SXComponentHosting>



@property (retain, nonatomic) NSArray *componentViews; // ivar: _componentViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXDragManager *dragManager; // ivar: _dragManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly) Class superclass;


-(BOOL)allowHierarchyRemoval;
-(BOOL)isTransitionable;
-(BOOL)transitionViewShouldFadeInContent;
-(BOOL)userInteractable;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(id)componentViewsForRole:(int)arg0 recursive:(BOOL)arg1 ;
-(id)contentViewForBehavior:(id)arg0 ;
-(id)dragManager:(id)arg0 dragableAtLocation:(struct CGPoint )arg1 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 mediaSharingPolicyProvider:(id)arg4 ;
-(id)transitionContentView;
-(id)viewForDragManager:(id)arg0 ;
-(struct CGRect )originalFrameForContentView:(id)arg0 behavior:(id)arg1 ;
-(struct CGRect )transitionContentFrame;
-(void)addComponentView:(id)arg0 ;
-(void)animationDidFinish:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)didApplyBehavior:(id)arg0 ;
-(void)prepareForTransitionType:(NSUInteger)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)removeComponentView:(id)arg0 ;


@end


#endif