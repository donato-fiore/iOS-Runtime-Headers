// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDYNAMICCONTENTPAGEITEM_H
#define PKPAYLATERDYNAMICCONTENTPAGEITEM_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "PKApplyFooterContent.h"

@interface PKPayLaterDynamicContentPageItem : NSObject

@property (copy, nonatomic) NSString *altContentSubtitle; // ivar: _altContentSubtitle
@property (retain, nonatomic) PKApplyFooterContent *altFooterContent; // ivar: _altFooterContent
@property (copy, nonatomic) NSString *contentDetailLeading; // ivar: _contentDetailLeading
@property (copy, nonatomic) NSString *contentDetailSubtitleLeading; // ivar: _contentDetailSubtitleLeading
@property (copy, nonatomic) NSString *contentDetailTrailing; // ivar: _contentDetailTrailing
@property (copy, nonatomic) NSString *contentSubtitle; // ivar: _contentSubtitle
@property (copy, nonatomic) NSString *contentTitle; // ivar: _contentTitle
@property (copy, nonatomic) NSString *errorTitle; // ivar: _errorTitle
@property (retain, nonatomic) PKApplyFooterContent *footerContent; // ivar: _footerContent
@property (copy, nonatomic) NSString *linkText; // ivar: _linkText
@property (copy, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (copy, nonatomic) NSArray *systemImageColors; // ivar: _systemImageColors
@property (copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif