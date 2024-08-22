// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONLISTENER_H
#define STDYNAMICACTIVITYATTRIBUTIONLISTENER_H

@class NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, STDynamicActivityAttributionServerHandle;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttributionListener : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<STDynamicActivityAttributionServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;


@end


#endif