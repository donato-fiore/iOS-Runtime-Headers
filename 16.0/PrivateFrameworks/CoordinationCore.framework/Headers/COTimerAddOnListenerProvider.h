// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COTIMERADDONLISTENERPROVIDER_H
#define COTIMERADDONLISTENERPROVIDER_H

@class NSString;
@protocol COServiceListenerProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface COTimerAddOnListenerProvider : NSObject <COServiceListenerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)serviceShouldAcceptNewConnection:(id)arg0 ;
-(id)serviceListener;


@end


#endif