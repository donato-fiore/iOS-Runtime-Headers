// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECUREELEMENTSIGNATUREINFO_H
#define PKSECUREELEMENTSIGNATUREINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSecureElementCertificateSet.h"

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger certificateVersion; // ivar: _certificateVersion
@property (readonly, copy, nonatomic) PKSecureElementCertificateSet *certificates; // ivar: _certificates
@property (readonly, copy, nonatomic) NSString *platformIdentifier; // ivar: _platformIdentifier
@property (readonly, copy, nonatomic) NSString *sequenceCounter; // ivar: _sequenceCounter


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecureElementCertificateSet:(id)arg0 sequenceCounter:(id)arg1 platformIdentifier:(id)arg2 certificateVersion:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif