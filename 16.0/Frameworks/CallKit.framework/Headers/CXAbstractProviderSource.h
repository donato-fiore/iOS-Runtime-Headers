// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXABSTRACTPROVIDERSOURCE_H
#define CXABSTRACTPROVIDERSOURCE_H

@class NSString, NSURL;
@protocol CXAbstractProviderHostProtocol, CXAbstractProviderVendorProtocol, CXAbstractProviderSourceDelegate, CXAbstractProviderSourceDelegateInternal, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXAbstractProviderSource : NSObject <CXAbstractProviderHostProtocol, CXAbstractProviderVendorProtocol>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXAbstractProviderSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) NSObject<CXAbstractProviderSourceDelegateInternal> *internalDelegate; // ivar: _internalDelegate
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CXAbstractProviderVendorProtocol> *vendorProtocolDelegate;


-(id)initWithIdentifier:(id)arg0 ;
-(void)actionCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginWithCompletionHandler:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)requestTransaction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif