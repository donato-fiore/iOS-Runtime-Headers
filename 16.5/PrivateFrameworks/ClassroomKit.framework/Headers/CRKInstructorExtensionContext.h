// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKINSTRUCTOREXTENSIONCONTEXT_H
#define CRKINSTRUCTOREXTENSIONCONTEXT_H

@class NSExtensionContext, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, CRKInstructorExtensionVendor;



@interface CRKInstructorExtensionContext : NSExtensionContext <NSXPCListenerDelegate, CRKInstructorExtensionVendor>

 {
    NSXPCListener *mListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)listenerEndpointWithCompletion:(id)arg0 ;


@end


#endif