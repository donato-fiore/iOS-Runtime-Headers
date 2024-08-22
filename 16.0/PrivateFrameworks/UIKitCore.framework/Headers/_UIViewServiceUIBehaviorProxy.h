// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWSERVICEUIBEHAVIORPROXY_H
#define _UIVIEWSERVICEUIBEHAVIORPROXY_H

@class UITargetedProxy, NSString;
@protocol _UIViewServiceUIBehaviorInterface;


#import "_UIViewServiceFencingControlProxy.h"

@interface _UIViewServiceUIBehaviorProxy : UITargetedProxy <_UIViewServiceUIBehaviorInterface>

 {
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyWrappingExportedObject:(id)arg0 forCommunicationWithPID:(int)arg1 exportedProtocol:(id)arg2 ;
+(void)initialize;
-(void)_objc_initiateDealloc;
-(void)dealloc;


@end


#endif