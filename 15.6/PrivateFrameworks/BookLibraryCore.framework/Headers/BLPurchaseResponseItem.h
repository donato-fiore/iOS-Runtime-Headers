// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLPURCHASERESPONSEITEM_H
#define BLPURCHASERESPONSEITEM_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BLPurchaseResponseItem : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *downloadID; // ivar: _downloadID
@property (nonatomic) BOOL isPurchaseRedownload; // ivar: _isPurchaseRedownload
@property (copy, nonatomic) NSDictionary *item; // ivar: _item
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *purchaseParameters; // ivar: _purchaseParameters


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif