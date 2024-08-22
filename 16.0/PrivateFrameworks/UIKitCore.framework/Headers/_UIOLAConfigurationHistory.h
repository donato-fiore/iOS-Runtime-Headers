// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOLACONFIGURATIONHISTORY_H
#define _UIOLACONFIGURATIONHISTORY_H

@class UILAConfigurationHistory, NSSet, NSMapTable, NSString;
@protocol _UIOLAPropertySource;



@interface _UIOLAConfigurationHistory : UILAConfigurationHistory <_UIOLAPropertySource>



@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged; // ivar: _itemFittingSizeChanged
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged; // ivar: _itemOrderingChanged
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) NSInteger axis;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // ivar: _baselineRelativeArrangement
@property (readonly, nonatomic) NSMapTable *customSpacings; // ivar: _customSpacings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger distribution; // ivar: _distribution
@property (nonatomic) BOOL hasEstablishedOrderingValues; // ivar: _hasEstablishedOrderingValues
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInOrderedArrangementUpdateSection) BOOL inOrderedArrangementUpdateSection; // ivar: _inOrderedArrangementUpdateSection
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) CGFloat proportionalFillDenominator; // ivar: _proportionalFillDenominator
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (readonly) Class superclass;


-(CGFloat)customSpacingAfterItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterItem:(id)arg1 ;


@end


#endif