// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGZOOMLAYOUT_H
#define PXGZOOMLAYOUT_H

@class NSArray;


#import "PXGLayout.h"

@interface PXGZoomLayout : PXGLayout {
    ? _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}


@property (retain, nonatomic) id *anchorObjectReference; // ivar: _anchorObjectReference
@property (nonatomic) CGPoint anchorViewportCenter; // ivar: _anchorViewportCenter
@property (readonly, nonatomic) NSArray *layers; // ivar: _layers
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) PXGLayout *primaryLayer; // ivar: _primaryLayer


-(NSInteger)itemForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)scrollableAxis;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(id)axSpriteIndexes;
-(id)init;
-(struct CGRect )sublayout:(id)arg0 visibleRectForRequestedVisibleRect:(struct CGRect )arg1 ;
-(void)_configureSublayouts;
-(void)_updateSublayoutGeometries;
-(void)didChangeSublayoutOrigins;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)referenceDepthDidChange;
-(void)referenceSizeDidChange;
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


@end


#endif