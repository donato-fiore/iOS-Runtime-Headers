// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONRECEIPTHEADERFIELD_H
#define PKTRANSACTIONRECEIPTHEADERFIELD_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKTransactionReceiptHeaderField : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransactionReceiptHeaderField:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif