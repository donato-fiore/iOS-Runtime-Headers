// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCERTIFICATE_IVARS_H
#define SFCERTIFICATE_IVARS_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface SFCertificate_Ivars : NSObject {
    NSInteger certificateType;
    NSString *subject;
    NSString *issuerName;
    NSData *serialNumber;
    *__SecCertificate secCertificate;
}






@end


#endif