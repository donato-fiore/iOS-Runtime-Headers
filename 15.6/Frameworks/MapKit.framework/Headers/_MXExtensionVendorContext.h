// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MXEXTENSIONVENDORCONTEXT_H
#define _MXEXTENSIONVENDORCONTEXT_H

@class MXExtensionContext, NSString;
@protocol _MXExtensionVendorContextType, _MXExtensionResponseObserver;



@interface _MXExtensionVendorContext : MXExtensionContext <_MXExtensionVendorContextType>

 {
    id<_MXExtensionResponseObserver> *_observer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_errorForVendor:(id)arg0 requestDispatcher:(id)arg1 ;
-(void)handleRequest:(id)arg0 requestDispatcher:(id)arg1 completion:(id)arg2 ;
-(void)startSendingUpdatesForRequest:(id)arg0 requestDispatcher:(id)arg1 toObserver:(id)arg2 ;
-(void)stopSendingUpdatesForRequest:(id)arg0 requestDispatcher:(id)arg1 ;


@end


#endif