// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSAPPLICATIONTRUSTFACADE_H
#define FBSAPPLICATIONTRUSTFACADE_H

@class NSString;
@protocol FBSApplicationTrustDataProvider;

#import <Foundation/Foundation.h>

#import "FBSSignatureValidationService.h"

@interface FBSApplicationTrustFacade : NSObject <FBSApplicationTrustDataProvider>

 {
    id<FBSApplicationTrustDataProvider> *_legacyProvider;
    id<FBSApplicationTrustDataProvider> *_modernProvider;
    FBSSignatureValidationService *_authoritativeProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)trustStateForApplication:(id)arg0 ;


@end


#endif