// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIAGCOLLECTIONSERVICEIMPL_H
#define DIAGCOLLECTIONSERVICEIMPL_H

@class NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DiagnosticExtensionController.h"
#import "ABCAdministrator.h"

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *queue;
    DiagnosticExtensionController *deController;
}


@property (weak, nonatomic) ABCAdministrator *administrator; // ivar: _administrator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)assertEntitlement:(id)arg0 entitlement:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)diagnosticExtensionController;
-(id)initWithQueue:(id)arg0 ;
-(void)collectPayloadsWithIdentifier:(id)arg0 diagnosticExtensions:(id)arg1 reply:(id)arg2 ;
-(void)collectPayloadsWithIdentifier:(id)arg0 diagnosticExtensionsWithParameters:(id)arg1 reply:(id)arg2 ;
-(void)shutdown;


@end


#endif