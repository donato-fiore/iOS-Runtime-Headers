// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDOMACCESSIBILITYPROPERTIES_H
#define RWIPROTOCOLDOMACCESSIBILITYPROPERTIES_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (nonatomic) int activeDescendantNodeId;
@property (nonatomic) BOOL busy;
@property (nonatomic) NSInteger checked;
@property (copy, nonatomic) NSArray *childNodeIds;
@property (copy, nonatomic) NSArray *controlledNodeIds;
@property (nonatomic) NSInteger current;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL expanded;
@property (copy, nonatomic) NSArray *flowedNodeIds;
@property (nonatomic) BOOL focused;
@property (nonatomic) CGFloat headingLevel;
@property (nonatomic) BOOL hidden;
@property (nonatomic) CGFloat hierarchyLevel;
@property (nonatomic) BOOL ignored;
@property (nonatomic) BOOL ignoredByDefault;
@property (nonatomic) NSInteger invalid;
@property (nonatomic) BOOL isPopUpButton;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL liveRegionAtomic;
@property (copy, nonatomic) NSArray *liveRegionRelevant;
@property (nonatomic) NSInteger liveRegionStatus;
@property (nonatomic) int mouseEventNodeId;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSArray *ownedNodeIds;
@property (nonatomic) int parentNodeId;
@property (nonatomic) BOOL pressed;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL required;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSArray *selectedChildNodeIds;


-(id)initWithExists:(BOOL)arg0 label:(id)arg1 nodeId:(int)arg2 role:(id)arg3 ;


@end


#endif