// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSIGNEDCLINICALDATAREGISTRYPUBLICKEYFETCHRESULT_H
#define HKSIGNEDCLINICALDATAREGISTRYPUBLICKEYFETCHRESULT_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataRegistryPublicKeyFetchResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *jwkData; // ivar: _jwkData
@property (readonly, copy, nonatomic) NSString *kid; // ivar: _kid
@property (readonly, nonatomic) NSUInteger outcome; // ivar: _outcome


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyID:(id)arg0 outcome:(NSUInteger)arg1 jwkData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif