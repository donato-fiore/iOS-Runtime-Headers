// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWIDGETICON_H
#define SBWIDGETICON_H

@class NSArray;
@protocol SBLeafIconDataSource;


#import "SBLeafIcon.h"
#import "SBHWidget.h"

@interface SBWidgetIcon : SBLeafIcon

@property (retain, nonatomic) SBHWidget *activeWidget;
@property (nonatomic) BOOL allowsExternalSuggestions; // ivar: _allowsExternalSuggestions
@property (nonatomic) BOOL allowsSuggestions; // ivar: _allowsSuggestions
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *firstSuggestedIconDataSource;
@property (readonly, nonatomic) SBHWidget *firstSuggestedWidget;
@property (readonly, nonatomic) NSUInteger iconDataSourcesExcludingSuggestionsCount;
@property (retain, nonatomic) NSObject<SBLeafIconDataSource> *lastUserSelectedDataSource; // ivar: _lastUserSelectedDataSource
@property (nonatomic) NSUInteger stackChangeReason; // ivar: _stackChangeReason
@property (readonly, copy, nonatomic) NSArray *widgets;


-(BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
-(BOOL)canBeAddedToMultiItemDrag;
-(BOOL)canBeReceivedByIcon;
-(BOOL)canReceiveGrabbedIcon;
-(BOOL)isWidgetIcon;
-(BOOL)isWidgetStackIcon;
-(BOOL)supportsConfiguration;
-(BOOL)supportsStackConfiguration;
-(NSUInteger)supportedGridSizeClasses;
-(id)_fallbackBestDataSource;
-(id)copyWithSuggestionSource:(NSInteger)arg0 ;
-(id)copyWithUniqueLeafIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)firstWidgetPassingTest:(id)arg0 ;
-(id)initWithCHSWidgetDescriptor:(id)arg0 ;
-(id)initWithCHSWidgetDescriptors:(id)arg0 ;
-(id)initWithCHSWidgetDescriptors:(id)arg0 suggestionSource:(NSInteger)arg1 ;
-(id)initWithLeafIdentifier:(id)arg0 applicationBundleID:(id)arg1 ;
-(id)initWithWidget:(id)arg0 ;
-(id)initWithWidgetExtensionIdentifiers:(id)arg0 widgetKinds:(id)arg1 ;
-(id)initWithWidgetExtensionIdentifiers:(id)arg0 widgetKinds:(id)arg1 widgetContainerBundleIdentifiers:(id)arg2 ;
-(id)initWithWidgetExtensionIdentifiers:(id)arg0 widgetKinds:(id)arg1 widgetContainerBundleIdentifiers:(id)arg2 suggestionSource:(NSInteger)arg3 ;
-(id)initWithWidgets:(id)arg0 ;
-(void)addDataSourcesFromWidgetIcons:(id)arg0 ;
-(void)addFirstSuggestedWidget;
-(void)didAddIconDataSource:(id)arg0 ;
-(void)didRemoveIconDataSource:(id)arg0 ;
-(void)removeFirstSuggestedIconDataSource;
-(void)updateLabel;


@end


#endif