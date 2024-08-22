// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPRODUCTSEARCHRESULT_H
#define PKPRODUCTSEARCHRESULT_H


#import <Foundation/Foundation.h>

#import "PKPaymentSetupProductsSectionListItem.h"

@interface PKProductSearchResult : NSObject

@property (readonly, nonatomic) PKPaymentSetupProductsSectionListItem *listItem; // ivar: _listItem
@property (readonly, nonatomic) CGFloat searchDistance; // ivar: _searchDistance


-(id)initWithListItem:(id)arg0 searchDistance:(CGFloat)arg1 ;


@end


#endif