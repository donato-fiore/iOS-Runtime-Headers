// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFT_H
#define SKUIGIFT_H

@class NSDate, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIItem.h"
#import "SKUIGiftTheme.h"

@interface SKUIGift : NSObject <NSCopying>



@property (copy, nonatomic) NSDate *deliveryDate; // ivar: _deliveryDate
@property (nonatomic) NSInteger giftAmount; // ivar: _giftAmount
@property (copy, nonatomic) NSString *giftAmountString; // ivar: _giftAmountString
@property (readonly, nonatomic) NSInteger giftCategory; // ivar: _category
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (copy, nonatomic) NSString *senderEmailAddress; // ivar: _senderEmailAddress
@property (copy, nonatomic) NSString *senderName; // ivar: _senderName
@property (copy, nonatomic) SKUIGiftTheme *theme; // ivar: _theme
@property (copy, nonatomic) NSString *totalGiftAmountString; // ivar: _totalGiftAmountString


-(id)HTTPBodyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGiftCategory:(NSInteger)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)reset;


@end


#endif