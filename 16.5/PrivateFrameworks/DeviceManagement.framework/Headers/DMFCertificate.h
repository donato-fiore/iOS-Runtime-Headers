// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFCERTIFICATE_H
#define DMFCERTIFICATE_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *commonName; // ivar: _commonName
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL isIdentity; // ivar: _isIdentity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommonName:(id)arg0 data:(id)arg1 isIdentity:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif