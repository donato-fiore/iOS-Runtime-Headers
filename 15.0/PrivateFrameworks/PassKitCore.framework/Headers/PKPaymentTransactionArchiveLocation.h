// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONARCHIVELOCATION_H
#define PKPAYMENTTRANSACTIONARCHIVELOCATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCloudStoreZone.h"

@interface PKPaymentTransactionArchiveLocation : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isArchived) BOOL archived; // ivar: _archived
@property (retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // ivar: _cloudStoreZone
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArchiveLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 archived:(BOOL)arg1 cloudStoreZone:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif