// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALBRAND_H
#define HKCLINICALBRAND_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *batchID; // ivar: _batchID
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic, getter=isFakeBrandForTestAccounts) BOOL fakeBrandForTestAccounts;


+(BOOL)supportsSecureCoding;
+(id)createFakeBrandForTestAccounts;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalID:(id)arg0 batchID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif