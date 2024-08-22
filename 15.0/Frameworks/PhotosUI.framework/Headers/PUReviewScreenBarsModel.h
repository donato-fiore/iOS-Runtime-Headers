// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUREVIEWSCREENBARSMODEL_H
#define PUREVIEWSCREENBARSMODEL_H

@class PXObservable, UIView, NSSet, NSDictionary;
@protocol PUMutableReviewScreenBarsModel;



@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel>



@property (nonatomic, setter=_setNeedsUpdateAvailableControls:) BOOL _needsUpdateAvailableControls; // ivar: __needsUpdateAvailableControls
@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic, setter=_setAvailableControls:) NSSet *availableControls; // ivar: _availableControls
@property (readonly, copy, nonatomic) NSDictionary *availableItemsByIdentifier; // ivar: _availableItemsByIdentifier
@property (readonly, nonatomic) CGPoint controlCenterAlignmentPoint; // ivar: _controlCenterAlignmentPoint
@property (retain, nonatomic, setter=_setEnabledControls:) NSSet *enabledControls; // ivar: _enabledControls
@property (readonly, nonatomic) BOOL lastControlAlignmentChangeForcedLayout; // ivar: _lastControlAlignmentChangeForcedLayout
@property (readonly, nonatomic) BOOL shouldPlaceScrubberInScrubberBar; // ivar: _shouldPlaceScrubberInScrubberBar
@property (readonly, nonatomic, getter=isTransitioningWithCamera) BOOL transitioningWithCamera; // ivar: _transitioningWithCamera
@property (readonly, nonatomic) BOOL useVerticalControlLayout; // ivar: _useVerticalControlLayout


-(id)mutableChangeObject;
-(void)_updateAvailableControls;
-(void)invokeCallbackForBarButtonItemWithIdentifier:(NSInteger)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif