// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPURCHASERESULT_H
#define ASDPURCHASERESULT_H

@class NSError, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (retain) NSNumber *itemID; // ivar: _itemID
@property (readonly, nonatomic) BOOL success; // ivar: _success


+(BOOL)supportsSecureCoding;
+(id)failedToPurchaseItemID:(id)arg0 withError:(id)arg1 ;
+(id)successfullyPurchasedItemID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif