// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCOMPOSITELAYOUT_H
#define PXGCOMPOSITELAYOUT_H

@class NSString;
@protocol PXGDataSourceDrivenLayout, PXGSublayoutFaultingDelegate;


#import "PXGLayout.h"
#import "PXGSublayoutComposition.h"

@interface PXGCompositeLayout : PXGLayout <PXGDataSourceDrivenLayout>

 {
    ? _updateFlags;
    BOOL _isUpdatingSublayouts;
    *NSInteger _currentSingleLayouts;
    *NSInteger _pendingSingleLayouts;
    *BOOL _pendingAnimations;
}


@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates; // ivar: _allowsRepeatedSublayoutsUpdates
@property (retain, nonatomic) PXGSublayoutComposition *composition; // ivar: _composition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets faultInOutsets; // ivar: _faultInOutsets
@property (nonatomic) UIEdgeInsets faultOutOutsets; // ivar: _faultOutOutsets
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXGSublayoutFaultingDelegate> *sublayoutFaultingDelegate; // ivar: _sublayoutFaultingDelegate
@property (readonly) Class superclass;


-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(void)_invalidateStylableType:(NSInteger)arg0 ;
-(void)_invalidateSublayouts;
-(void)_updateSublayoutOfStylableType:(NSInteger)arg0 ;
-(void)_updateSublayouts;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)didAddSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)didApplySublayoutChangeDetails:(id)arg0 axAdjustedSubgroupChangeDetails:(id)arg1 countAfterChanges:(NSInteger)arg2 ;
-(void)didUpdate;
-(void)didUpdateSublayouts;
-(void)insertSublayoutProvider:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)setSublayoutIndex:(NSInteger)arg0 forUniquelyStylableType:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)sublayoutDidChangeContentSize:(id)arg0 ;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)viewEnvironmentDidChange;
-(void)visibleRectDidChange;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif