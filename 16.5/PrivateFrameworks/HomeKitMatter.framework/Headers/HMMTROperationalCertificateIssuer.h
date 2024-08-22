// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROPERATIONALCERTIFICATEISSUER_H
#define HMMTROPERATIONALCERTIFICATEISSUER_H

@class NSArray, NSString;
@protocol HMFObject, MTROperationalCertificateIssuer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMTRAccessoryServerBrowser.h"

@interface HMMTROperationalCertificateIssuer : NSObject <HMFObject, MTROperationalCertificateIssuer>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy) NSString *shortDescription;
@property (readonly, nonatomic) BOOL shouldSkipAttestationCertificateValidation;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 browser:(id)arg1 ;
-(void)issueOperationalCertificateForRequest:(id)arg0 attestationInfo:(id)arg1 controller:(id)arg2 completion:(id)arg3 ;


@end


#endif