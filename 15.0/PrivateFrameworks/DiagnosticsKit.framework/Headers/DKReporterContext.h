// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKREPORTERCONTEXT_H
#define DKREPORTERCONTEXT_H

@class NSExtensionContext, NSString;
@protocol DKReporterRemoteContext;



@interface DKReporterContext : NSExtensionContext <DKReporterRemoteContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)completeWithReport:(id)arg0 completion:(id)arg1 ;
-(void)startRemoteReportWithComponentIdentity:(id)arg0 completion:(id)arg1 ;


@end


#endif