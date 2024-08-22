// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSUMMARYITEM_H
#define PKPAYMENTSUMMARYITEM_H

@class NSDecimalNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *localizedAmount; // ivar: _localizedAmount
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL useDarkColor; // ivar: _useDarkColor
@property (nonatomic) BOOL useLargeFont; // ivar: _useLargeFont


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)_automaticReloadPaymentSummaryItemWithProtobuf:(id)arg0 ;
+(id)_deferredSummaryItemWithProtobuf:(id)arg0 ;
+(id)_recurringSummaryItemWithProtobuf:(id)arg0 ;
+(id)itemWithProtobuf:(id)arg0 ;
+(id)summaryItemWithLabel:(id)arg0 amount:(id)arg1 ;
+(id)summaryItemWithLabel:(id)arg0 amount:(id)arg1 type:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentSummaryItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)_protobufAutomaticReloadPaymentSummaryItemForItem:(id)arg0 ;
-(id)_protobufDeferredSummaryItemForItem:(id)arg0 ;
-(id)_protobufRecurringSummaryItemForItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)summaryItemProtobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif