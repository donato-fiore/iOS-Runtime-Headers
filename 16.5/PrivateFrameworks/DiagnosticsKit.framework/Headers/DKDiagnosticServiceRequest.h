// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKDIAGNOSTICSERVICEREQUEST_H
#define DKDIAGNOSTICSERVICEREQUEST_H

@class NSXPCConnection, NSString;
@protocol DKExtensionHostAdapterDelegate;

#import <Foundation/Foundation.h>

#import "DKDiagnosticHostContext.h"

@interface DKDiagnosticServiceRequest : NSObject <DKExtensionHostAdapterDelegate>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) DKDiagnosticHostContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) id *hostServicesDelegate; // ivar: _hostServicesDelegate
@property (readonly) Class superclass;


-(id)initWithHostServicesDelegate:(id)arg0 ;
-(void)_completeWithDiagnosticResult:(id)arg0 error:(id)arg1 ;
-(void)cancelExtensionRequest;
-(void)completeWithPayload:(id)arg0 completion:(id)arg1 ;
-(void)didFailStart;
-(void)didInterrupt;
-(void)didInvalidate;


@end


#endif