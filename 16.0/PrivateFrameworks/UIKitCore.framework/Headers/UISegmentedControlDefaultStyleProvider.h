// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEGMENTEDCONTROLDEFAULTSTYLEPROVIDER_H
#define UISEGMENTEDCONTROLDEFAULTSTYLEPROVIDER_H

@class NSString;
@protocol UISegmentedControlStyleProvider;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIVibrancyEffect.h"

@interface UISegmentedControlDefaultStyleProvider : NSObject <UISegmentedControlStyleProvider>



@property (readonly, nonatomic) BOOL animateSlidingSelectionByDefault;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *defaultBackgroundTintColor;
@property (readonly, nonatomic) CGFloat defaultContentPaddingWidth;
@property (readonly, nonatomic) CGFloat defaultInterSegmentSpacing;
@property (readonly, nonatomic) CGFloat defaultTextContentPaddingWidth;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTransparentBackgroundByDefault;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL limitInternalLayoutAndInteractionToDefaultHeight;
@property (readonly, nonatomic) CGFloat mostlyInsideMargin;
@property (readonly, nonatomic) CGFloat segmentHidingFinalScaleFactor;
@property (readonly, nonatomic) CGFloat segmentSelectionScaleFactor;
@property (readonly, nonatomic) UIVibrancyEffect *selectedSegmentDefaultVibrancyEffect;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAXPopover;
@property (readonly, nonatomic) BOOL supportsDynamicTypeByDefault;
@property (readonly, nonatomic) BOOL useGeneratedImages;
@property (readonly, nonatomic) BOOL useSelectionIndicatorStyling;
@property (readonly, nonatomic) BOOL useTVStyleFocusSelection;


-(BOOL)maskToCornerRadius;
-(CGFloat)cornerRadiusForControlSize:(int)arg0 ;
-(CGFloat)defaultHeightForControlSize:(int)arg0 ;
-(CGFloat)dividerWidthForControlSize:(int)arg0 ;
-(CGFloat)selectionIndicatorInsetForControlSize:(int)arg0 ;
-(id)createBackdropView;
-(id)createSegmentBezelView;
-(id)fontColorForSegment:(id)arg0 enabled:(BOOL)arg1 selected:(BOOL)arg2 state:(NSUInteger)arg3 ;
-(id)fontForControlSize:(int)arg0 selected:(BOOL)arg1 ;
-(struct UIEdgeInsets )alignmentInsetsForControlSize:(int)arg0 bounds:(struct CGRect )arg1 ;
-(struct UIEdgeInsets )contentInsetsForControlSize:(int)arg0 position:(unsigned int)arg1 bounds:(struct CGRect )arg2 ;


@end


#endif