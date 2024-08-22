// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDYNAMICCONTENTPAGE_H
#define PKPAYLATERDYNAMICCONTENTPAGE_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PKPayLaterDynamicContentPageItem.h"
#import "PKApplyFooterContent.h"

@interface PKPayLaterDynamicContentPage : NSObject {
    NSDictionary *_contentByIdentifier;
    NSDictionary *_productSectionByType;
}


@property (copy, nonatomic) NSString *altPrimaryActionIdentifier; // ivar: _altPrimaryActionIdentifier
@property (copy, nonatomic) NSString *altPrimaryActionTitle; // ivar: _altPrimaryActionTitle
@property (retain, nonatomic) PKPayLaterDynamicContentPageItem *contentItem; // ivar: _contentItem
@property (retain, nonatomic) PKApplyFooterContent *footerContent; // ivar: _footerContent
@property (copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (copy, nonatomic) NSString *optionIdentifier; // ivar: _optionIdentifier
@property (nonatomic) NSUInteger pageType; // ivar: _pageType
@property (copy, nonatomic) NSString *primaryActionIdentifier; // ivar: _primaryActionIdentifier
@property (copy, nonatomic) NSString *primaryActionTitle; // ivar: _primaryActionTitle
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (copy, nonatomic) NSString *secondaryActionIdentifier; // ivar: _secondaryActionIdentifier
@property (copy, nonatomic) NSString *secondaryActionTitle; // ivar: _secondaryActionTitle
@property (copy, nonatomic) NSArray *sections; // ivar: _sections


+(id)_contentByIdentifierFromDictionary:(id)arg0 pageType:(NSUInteger)arg1 ;
+(id)_productSectionByTypeFromDictionary:(id)arg0 pageType:(NSUInteger)arg1 ;
+(id)keyForProductType:(NSUInteger)arg0 optionIdentifier:(id)arg1 ;
-(id)description;
-(id)dynamicContentPageForProductType:(NSUInteger)arg0 optionIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 pageType:(NSUInteger)arg1 ;
-(id)productSectionForType:(NSUInteger)arg0 ;


@end


#endif