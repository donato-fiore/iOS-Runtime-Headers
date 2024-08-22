// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _APPLETVCOSERVICELISTENERPROVIDER_H
#define _APPLETVCOSERVICELISTENERPROVIDER_H

@class NSString, NSXPCListener;
@protocol COServiceListenerProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _appleTVCOServiceListenerProvider : NSObject <COServiceListenerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)serviceShouldAcceptNewConnection:(id)arg0 ;
-(id)initWithXPCListener:(id)arg0 ;
-(id)serviceListener;


@end


#endif