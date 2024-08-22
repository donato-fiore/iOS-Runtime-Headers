// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONCLIENTIMPL_H
#define AKAUTHORIZATIONCLIENTIMPL_H

@protocol AKAuthorizationClientProtocol, AKAuthorizationUIProvider;

#import <Foundation/Foundation.h>


@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>



@property (retain, nonatomic) NSObject<AKAuthorizationUIProvider> *uiProvider; // ivar: _uiProvider


-(void)dealloc;
-(void)presentAuthorizationUIForContext:(id)arg0 completion:(id)arg1 ;


@end


#endif