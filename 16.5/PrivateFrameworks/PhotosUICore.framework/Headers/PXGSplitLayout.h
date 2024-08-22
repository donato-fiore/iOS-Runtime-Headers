// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSPLITLAYOUT_H
#define PXGSPLITLAYOUT_H



#import "PXGLayout.h"

@interface PXGSplitLayout : PXGLayout {
    ? _updateFlags;
    ? _additionalUpdateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    BOOL _isPerformingAdditionalUpdate;
}


@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates; // ivar: _allowsRepeatedSublayoutsUpdates
@property (retain, nonatomic) PXGLayout *firstSublayout; // ivar: _firstSublayout
@property (readonly, nonatomic) NSInteger firstSublayoutIndex;
@property (nonatomic) BOOL floatingModesRespectSafeArea; // ivar: _floatingModesRespectSafeArea
@property (nonatomic) CGFloat interlayoutSpacing; // ivar: _interlayoutSpacing
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSInteger objectReferenceLookup; // ivar: _objectReferenceLookup
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) UIEdgeInsets presentedPadding; // ivar: _presentedPadding
@property (retain, nonatomic) PXGLayout *secondSublayout; // ivar: _secondSublayout
@property (readonly, nonatomic) NSInteger secondSublayoutIndex;
@property (nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize; // ivar: _shouldExcludeTopAndBottomPaddingFromReferenceSize


-(BOOL)definesContextForPointReferences;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(void)_performUpdateSublayoutGeometries;
-(void)_replaceSublayout:(id)arg0 withSublayout:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)_updateSublayoutGeometries;
-(void)didAddSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)didChangeSublayoutOrigins;
-(void)didUpdate;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
-(void)removeSublayoutsInRange:(struct _NSRange )arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)screenScaleDidChange;
-(void)scrollSpeedRegimeDidChange;
-(void)sublayoutDidChangeContentSize:(id)arg0 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg0 ;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)userInterfaceDirectionDidChange;
-(void)viewEnvironmentDidChange;
-(void)visibleRectDidChange;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif