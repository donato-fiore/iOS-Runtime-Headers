// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMUTABLEITEMSECTION_H
#define HFMUTABLEITEMSECTION_H

@class NSAttributedString, NSString, NSArray, NSDictionary;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;


#import "HFItemSection.h"

@interface HFMutableItemSection : HFItemSection

@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (copy, nonatomic) NSAttributedString *attributedHeaderTitle;
@property (copy, nonatomic) NSString *footerTitle;
@property (weak, nonatomic) NSObject<HFItemSectionAccessoryButtonHeaderDelegate> *headerAccessoryButtonDelegate;
@property (copy, nonatomic) NSString *headerAccessoryButtonTitle;
@property (copy, nonatomic) NSString *headerSecondaryText;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) BOOL hideAccessoryButton;
@property (nonatomic) BOOL hideHeaderText;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *userInfo;




@end


#endif