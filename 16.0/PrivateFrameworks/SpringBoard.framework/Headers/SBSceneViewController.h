// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEVIEWCONTROLLER_H
#define SBSCENEVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, SBSceneHandle, SBSceneView;
@protocol SBSceneViewPresentationConfiguring, SBSceneViewControlling, SBScenePlaceholderContentContext;



@interface SBSceneViewController : UIViewController <SBSceneViewPresentationConfiguring, SBSceneViewControlling>



@property (readonly, nonatomic) NSInteger contentInterfaceOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) CGSize contentReferenceSize; // ivar: _contentReferenceSize
@property (retain, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext; // ivar: _placeholderContentContext
@property (readonly, nonatomic) SBSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic, getter=_sceneView) SBSceneView *sceneView; // ivar: _sceneView
@property (readonly) Class superclass;


-(NSInteger)sceneViewPresentationPriority:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg0 ;
-(id)newSnapshot;
-(id)newSnapshotView;
-(id)sceneViewPresentationIdentifier:(id)arg0 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(NSInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)newSnapshotViewOnQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif