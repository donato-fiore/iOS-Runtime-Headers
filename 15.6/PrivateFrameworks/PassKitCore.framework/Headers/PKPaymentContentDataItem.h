// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCONTENTDATAITEM_H
#define PKPAYMENTCONTENTDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKPaymentContentItem.h"

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem; // ivar: _contentItem


+(BOOL)supportsMultipleItems;
+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(id)initWithContentItem:(id)arg0 ;


@end


#endif