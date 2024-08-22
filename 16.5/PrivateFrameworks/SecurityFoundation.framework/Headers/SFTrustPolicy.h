// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTRUSTPOLICY_H
#define SFTRUSTPOLICY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SFTrustPolicy : NSObject <NSCopying>

 {
    id *_trustPolicyInternal;
}




-(BOOL)evaluateCertificateChain:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif