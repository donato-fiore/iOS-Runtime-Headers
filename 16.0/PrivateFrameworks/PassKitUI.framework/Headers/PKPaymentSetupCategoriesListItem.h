// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPCATEGORIESLISTITEM_H
#define PKPAYMENTSETUPCATEGORIESLISTITEM_H

@class PKPaymentSetupProductCategory, NSString;
@protocol NSCopying;


#import "PKPaymentSetupListItem.h"

@interface PKPaymentSetupCategoriesListItem : PKPaymentSetupListItem <NSCopying>



@property (retain, nonatomic) PKPaymentSetupProductCategory *category; // ivar: _category
@property (nonatomic) NSUInteger isLoadingIcon; // ivar: _isLoadingIcon
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif