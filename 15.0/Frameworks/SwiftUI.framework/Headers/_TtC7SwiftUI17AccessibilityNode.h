// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7SWIFTUI17ACCESSIBILITYNODE_H
#define _TTC7SWIFTUI17ACCESSIBILITYNODE_H

@class NSArray, NSAttributedString, AXChartDescriptor, NSString, UIBezierPath;
@protocol AXChart, AXCustomContentProvider, AXContainerDataSeries;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI17AccessibilityNode : NSObject <AXChart, AXCustomContentProvider, AXContainerDataSeries>

 {
    ? id;
    ? version;
    ? children;
    ? bridgedChild;
    ? parent;
    ? viewRendererHost;
    ? attachmentsStorage;
    ? cachedCombinedAttachment;
    ? platformRotorStorage;
    ? cachedIsPlaceholder;
    ? focusableAncestor;
    ? relationshipScope;
    ? isCell;
}


@property (nonatomic, readonly) NSArray *_accessibilityUserDefinedLinkedUIElements;
@property (nonatomic) CGPoint accessibilityActivationPoint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) NSInteger accessibilityContainerType;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSArray *accessibilityCustomContent;
@property (nonatomic, copy) NSArray *accessibilityCustomRotors;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) BOOL accessibilityElementsHidden;
@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityLanguage;
@property (nonatomic) NSInteger accessibilityNavigationStyle;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) BOOL accessibilityRespondsToUserInteraction;
@property (nonatomic, copy) NSString *accessibilityTextualContext;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) BOOL accessibilityViewIsModal;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) BOOL shouldGroupAccessibilityChildren;


-(BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
-(BOOL)_accessibilityDataSeriesSupportsSonification;
-(BOOL)_accessibilityDataSeriesSupportsSummarization;
-(BOOL)_accessibilityIsChartElement;
-(BOOL)_accessibilityScrollToVisible;
-(BOOL)accessibilityActivate;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityScroll:(NSInteger)arg0 ;
-(CGFloat)_accessibilityDataSeriesSonificationDuration;
-(CGFloat)_accessibilityMaxValue;
-(CGFloat)_accessibilityMinValue;
-(CGFloat)_accessibilityNumberValue;
-(NSInteger)_accessibilityDataSeriesType;
-(NSInteger)_accessibilityExpandedStatus;
-(NSInteger)accessibilityElementCount;
-(NSUInteger)_accessibilityAutomationType;
-(id)_accessibilityDataSeriesGridlinePositionsForAxis:(NSInteger)arg0 ;
-(id)_accessibilityDataSeriesMaximumValueForAxis:(NSInteger)arg0 ;
-(id)_accessibilityDataSeriesMinimumValueForAxis:(NSInteger)arg0 ;
-(id)_accessibilityDataSeriesName;
-(id)_accessibilityDataSeriesTitleForAxis:(NSInteger)arg0 ;
-(id)_accessibilityDataSeriesUnitLabelForAxis:(NSInteger)arg0 ;
-(id)_accessibilityDataSeriesValueDescriptionForPosition:(CGFloat)arg0 axis:(NSInteger)arg1 ;
-(id)_accessibilityDataSeriesValuesForAxis:(NSInteger)arg0 ;
-(id)_accessibilityHeadingLevel;
-(id)_accessibilityMediaAnalysisElement;
-(id)_accessibilityRoleDescription;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)accessibilityContainer;
-(id)accessibilityURL;
-(id)init;
-(struct _NSRange )accessibilityRowRange;
-(void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg0 ;
-(void)accessibilityDecrement;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)dealloc;


@end


#endif