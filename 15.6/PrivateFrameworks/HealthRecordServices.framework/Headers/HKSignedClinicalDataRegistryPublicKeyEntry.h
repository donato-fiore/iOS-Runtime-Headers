// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIGNEDCLINICALDATAREGISTRYPUBLICKEYENTRY_H
#define HKSIGNEDCLINICALDATAREGISTRYPUBLICKEYENTRY_H

@class NSDate, NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataRegistryPublicKeyEntry : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *added; // ivar: _added
@property (readonly, copy, nonatomic) NSData *jwk; // ivar: _jwk
@property (readonly, copy, nonatomic) NSString *kid; // ivar: _kid
@property (readonly, copy, nonatomic) NSDate *removed; // ivar: _removed
@property (readonly, copy, nonatomic) NSString *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyID:(id)arg0 added:(id)arg1 removed:(id)arg2 source:(id)arg3 jwkData:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif