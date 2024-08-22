// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPURCHASERESULT_H
#define AMSPURCHASERESULT_H

@class NSURLResponse, NSString, NSError, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSPurchase.h"

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURLResponse *URLResponse; // ivar: _URLResponse
@property (copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSDictionary *loadURLEventDictionary; // ivar: _loadURLEventDictionary
@property (copy, nonatomic) AMSPurchase *purchase; // ivar: _purchase
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPurchaseResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif