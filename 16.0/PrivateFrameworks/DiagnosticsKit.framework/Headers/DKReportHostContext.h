// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKREPORTHOSTCONTEXT_H
#define DKREPORTHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol DKReportHostRemoteContext, DKExtensionHostAdapter, DKExtensionHostAdapterDelegate;



@interface DKReportHostContext : NSExtensionContext <DKReportHostRemoteContext, DKExtensionHostAdapter>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DKExtensionHostAdapterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelWithCompletion:(id)arg0 ;
-(void)completeRemoteWithReport:(id)arg0 completion:(id)arg1 ;
-(void)startWithPayload:(id)arg0 completion:(id)arg1 ;


@end


#endif