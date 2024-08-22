// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVLAYOUTITEMATTRIBUTES_H
#define AVLAYOUTITEMATTRIBUTES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVLayoutItemAttributes.h"

@interface AVLayoutItemAttributes : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (nonatomic) BOOL canOnlyAppearInControlOverflowMenu; // ivar: _canOnlyAppearInControlOverflowMenu
@property (nonatomic) BOOL canOverflowToAuxiliaryMenu; // ivar: _canOverflowToAuxiliaryMenu
@property (nonatomic) BOOL canSubstituteOtherAttributes; // ivar: _canSubstituteOtherAttributes
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (weak) AVLayoutItemAttributes *displayPartnerAttributes; // ivar: _displayPartnerAttributes
@property (nonatomic) NSUInteger displayPriority; // ivar: _displayPriority
@property (nonatomic) BOOL hasFlexibleContentSize; // ivar: _hasFlexibleContentSize
@property (nonatomic, getter=isIncluded) BOOL included; // ivar: _included
@property (nonatomic) CGSize minimumSize; // ivar: _minimumSize
@property (retain, nonatomic) AVLayoutItemAttributes *nextAttributesInLayoutOrder; // ivar: _nextAttributesInLayoutOrder
@property (weak, nonatomic) AVLayoutItemAttributes *nextAttributesInPriorityOrder; // ivar: _nextAttributesInPriorityOrder
@property (nonatomic) BOOL prefersSecondaryMaterialOverlay; // ivar: _prefersSecondaryMaterialOverlay
@property (nonatomic) CGFloat trailingInterItemSpace; // ivar: _trailingInterItemSpace
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;


@end


#endif