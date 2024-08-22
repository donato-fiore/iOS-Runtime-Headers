// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFITEMSECTION_H
#define HFITEMSECTION_H

@class NSAttributedString, NSString, NSArray, NSDictionary;
@protocol HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable, HFItemSectionAccessoryButtonHeaderDelegate;

#import <Foundation/Foundation.h>


@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable>



@property (copy, nonatomic) NSAttributedString *attributedFooterTitle; // ivar: _attributedFooterTitle
@property (copy, nonatomic) NSAttributedString *attributedHeaderTitle; // ivar: _attributedHeaderTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *diffableItems;
@property (copy, nonatomic) NSString *footerTitle; // ivar: _footerTitle
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HFItemSectionAccessoryButtonHeaderDelegate> *headerAccessoryButtonDelegate; // ivar: _headerAccessoryButtonDelegate
@property (copy, nonatomic) NSString *headerAccessoryButtonTitle; // ivar: _headerAccessoryButtonTitle
@property (copy, nonatomic) NSString *headerSecondaryText; // ivar: _headerSecondaryText
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) BOOL hideAccessoryButton; // ivar: _hideAccessoryButton
@property (nonatomic) BOOL hideHeaderText; // ivar: _hideHeaderText
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)defaultItemComparator:(SEL)arg0 ;
+(id)filterSections:(id)arg0 toDisplayedItems:(id)arg1 ;
+(id)itemResultManualSortComparator:(SEL)arg0 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)_createCopyMutable:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif