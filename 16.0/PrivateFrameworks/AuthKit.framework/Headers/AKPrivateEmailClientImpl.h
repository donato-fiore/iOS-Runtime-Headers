// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKPRIVATEEMAILCLIENTIMPL_H
#define AKPRIVATEEMAILCLIENTIMPL_H

@class NSString;
@protocol AKPrivateEmailClientProtocol, AKPrivateEmailUIProvider;

#import <Foundation/Foundation.h>


@interface AKPrivateEmailClientImpl : NSObject <AKPrivateEmailClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<AKPrivateEmailUIProvider> *uiProvider; // ivar: _uiProvider


-(void)presentPrivateEmailUIForContext:(id)arg0 completion:(id)arg1 ;


@end


#endif