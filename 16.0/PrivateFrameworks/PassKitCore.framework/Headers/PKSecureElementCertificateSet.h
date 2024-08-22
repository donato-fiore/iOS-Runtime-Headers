// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSECUREELEMENTCERTIFICATESET_H
#define PKSECUREELEMENTCERTIFICATESET_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (nonatomic) BOOL supportsLegacyFormats; // ivar: _supportsLegacyFormats


+(BOOL)supportsSecureCoding;
-(id)certificateOfType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRSACertificate:(id)arg0 ECDSACertificate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif