// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKEXTENSIONADAPTER_H
#define DKEXTENSIONADAPTER_H

@class NSString, NSMutableDictionary;
@protocol DKRequestDelegate, OS_dispatch_queue, DKExtensionAttributes;

#import <Foundation/Foundation.h>


@interface DKExtensionAdapter : NSObject <DKRequestDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterConnectQueue; // ivar: _adapterConnectQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *adapterQueue; // ivar: _adapterQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<DKExtensionAttributes> *extensionAttributes; // ivar: _extensionAttributes
@property (retain, nonatomic) NSMutableDictionary *extensionToRequestIdentifierLookup; // ivar: _extensionToRequestIdentifierLookup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *requestLookup; // ivar: _requestLookup
@property (readonly) Class superclass;


+(id)extensionAdapterWithExtensionAttributes:(id)arg0 ;
-(id)_requestForExtensionRequestIdentifier:(id)arg0 ;
-(id)initWithExtensionAttributes:(id)arg0 ;
-(void)_attachHandlersToExtension:(id)arg0 ;
-(void)_didCancelExtensionRequest:(id)arg0 error:(id)arg1 ;
-(void)_didCompleteExtensionRequest:(id)arg0 ;
-(void)_didInterruptExtensionRequest:(id)arg0 ;
-(void)beginRequest:(id)arg0 payload:(id)arg1 completion:(id)arg2 ;
-(void)cancelAll;
-(void)request:(id)arg0 didCompleteWithPayload:(id)arg1 error:(id)arg2 ;


@end


#endif