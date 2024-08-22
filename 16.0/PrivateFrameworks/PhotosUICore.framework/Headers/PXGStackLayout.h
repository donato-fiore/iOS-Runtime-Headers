// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGSTACKLAYOUT_H
#define PXGSTACKLAYOUT_H

@class NSString;
@protocol PXGDataSourceDrivenLayout, PXGSublayoutFaultingDelegate;


#import "PXGLayout.h"

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout>

 {
    ? _updateFlags;
    ? _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    *? _sublayoutOriginsBeforeUpdate;
    UIEdgeInsets _flexibleRegionInsets;
}


@property (nonatomic) BOOL alignsFirstSublayoutToVisibleTopEdge; // ivar: _alignsFirstSublayoutToVisibleTopEdge
@property (nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge; // ivar: _alignsLastSublayoutToVisibleBottomEdge
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets faultInOutsets; // ivar: _faultInOutsets
@property (nonatomic) UIEdgeInsets faultOutOutsets; // ivar: _faultOutOutsets
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interlayoutSpacing; // ivar: _interlayoutSpacing
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (weak, nonatomic) NSObject<PXGSublayoutFaultingDelegate> *sublayoutFaultingDelegate; // ivar: _sublayoutFaultingDelegate
@property (readonly) Class superclass;


-(BOOL)definesContextForPointReferences;
-(NSInteger)scrollableAxis;
-(id)init;
-(struct UIEdgeInsets )additionalSafeAreaInsetsForSublayout:(id)arg0 ;
-(struct UIEdgeInsets )flexibleRegionInsets;
-(void)_invalidateEstimatedSublayoutContentSizes;
-(void)_invalidateFirstFloatingLayout;
-(void)_updateFirstFloatingLayout;
-(void)_updateInterlayoutSpacing;
-(void)_updateSublayouts;
-(void)dealloc;
-(void)didAddSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)didUpdate;
-(void)insertSublayoutProvider:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)invalidateAdditionalSafeAreaInsets;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg0 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg0 ;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)viewEnvironmentDidChange;
-(void)visibleRectDidChange;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif