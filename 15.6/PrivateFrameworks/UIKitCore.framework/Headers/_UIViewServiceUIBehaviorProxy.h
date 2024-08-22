// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWSERVICEUIBEHAVIORPROXY_H
#define _UIVIEWSERVICEUIBEHAVIORPROXY_H

@class UITargetedProxy, NSString;
@protocol _UIViewServiceUIBehaviorInterface;


#import "_UIViewServiceFencingControlProxy.h"

@interface _UIViewServiceUIBehaviorProxy : UITargetedProxy <_UIViewServiceUIBehaviorInterface>

 {
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyWrappingExportedObject:(id)arg0 forCommunicationWithPID:(int)arg1 exportedProtocol:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)retain;
-(int)__automatic_invalidation_logic;
-(void)dealloc;
-(void)release;


@end


#endif