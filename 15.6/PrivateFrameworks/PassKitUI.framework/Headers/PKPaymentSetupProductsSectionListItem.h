// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPPRODUCTSSECTIONLISTITEM_H
#define PKPAYMENTSETUPPRODUCTSSECTIONLISTITEM_H

@class PKPaymentSetupProduct, NSOrderedSet, NSString;
@protocol NSCopying;


#import "PKPaymentSetupListItem.h"

@interface PKPaymentSetupProductsSectionListItem : PKPaymentSetupListItem <NSCopying>



@property (nonatomic) NSUInteger isLoadingIcon; // ivar: _isLoadingIcon
@property (retain, nonatomic) PKPaymentSetupProduct *product; // ivar: _product
@property (copy, nonatomic) NSOrderedSet *searchTerms; // ivar: _searchTerms
@property (retain, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif