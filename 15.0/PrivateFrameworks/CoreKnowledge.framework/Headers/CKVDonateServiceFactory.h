// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVDONATESERVICEFACTORY_H
#define CKVDONATESERVICEFACTORY_H

@class NSString;
@protocol CKVDonateServiceProvider;


#import "CKVServiceFactory.h"

@interface CKVDonateServiceFactory : CKVServiceFactory <CKVDonateServiceProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)donateService;


@end


#endif