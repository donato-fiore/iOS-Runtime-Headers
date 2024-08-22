// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYELEMENTTRAVERSALOPTIONS_H
#define UIACCESSIBILITYELEMENTTRAVERSALOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UIAccessibilityElementTraversalOptions : NSObject

@property (retain, nonatomic) NSArray *allowedViewsForTraversal; // ivar: _allowedViewsForTraversal
@property (copy, nonatomic) id *alternateViewChildrenHandler; // ivar: _alternateViewChildrenHandler
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) BOOL forSpeakScreen; // ivar: _forSpeakScreen
@property (nonatomic) BOOL honorsElementGrouping; // ivar: _honorsElementGrouping
@property (nonatomic) BOOL includeAncestorsOfSelfInSiblingMatch; // ivar: _includeAncestorsOfSelfInSiblingMatch
@property (nonatomic) BOOL includeHiddenViews; // ivar: _includeHiddenViews
@property (nonatomic) BOOL includeWindowlessViews; // ivar: _includeWindowlessViews
@property (copy, nonatomic) id *leafNodePredicate; // ivar: _leafNodePredicate
@property (nonatomic) BOOL shouldIncludeKeyboardObscuredElements; // ivar: _shouldIncludeKeyboardObscuredElements
@property (nonatomic) BOOL shouldIncludeStatusBarWindow; // ivar: _shouldIncludeStatusBarWindow
@property (nonatomic) BOOL shouldOnlyIncludeElementsWithVisibleFrame; // ivar: _shouldOnlyIncludeElementsWithVisibleFrame
@property (nonatomic) BOOL shouldReturnScannerGroups; // ivar: _shouldReturnScannerGroups
@property (nonatomic) BOOL shouldUseAllSubviews; // ivar: _shouldUseAllSubviews
@property (nonatomic) BOOL sorted; // ivar: _sorted


+(id)defaultFullKeyboardAccessOptions;
+(id)defaultSpeakScreenOptions;
+(id)defaultSwitchControlOptions;
+(id)defaultVoiceOverOptions;
+(id)defaultVoiceOverOptionsHonoringGroups;
+(id)options;
+(id)voiceOverOptionsIncludingElementsFromOpaqueProviders:(BOOL)arg0 honorsGroups:(BOOL)arg1 ;
-(id)description;
-(id)init;


@end


#endif