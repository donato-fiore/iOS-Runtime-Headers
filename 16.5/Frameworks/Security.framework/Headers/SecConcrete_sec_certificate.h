// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCONCRETE_SEC_CERTIFICATE_H
#define SECCONCRETE_SEC_CERTIFICATE_H

@class NSString;
@protocol OS_sec_certificate;

#import <Foundation/Foundation.h>


@interface SecConcrete_sec_certificate : NSObject <OS_sec_certificate>

 {
    *__SecCertificate certificate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(void)dealloc;


@end


#endif