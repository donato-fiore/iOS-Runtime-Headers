// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFCERTIFICATE_H
#define _SFCERTIFICATE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface _SFCertificate : NSObject {
    id *_certificateInternal;
}


@property (readonly, nonatomic) NSInteger certificateType;
@property (readonly, nonatomic) NSString *issuerName;
@property (readonly, nonatomic) *__SecCertificate secCertificate;
@property (readonly, nonatomic) NSData *serialNumber;
@property (readonly, nonatomic) NSString *subject;


+(BOOL)supportsSecureCoding;
-(id)initWithSecCertificate:(struct __SecCertificate *)arg0 ;


@end


#endif