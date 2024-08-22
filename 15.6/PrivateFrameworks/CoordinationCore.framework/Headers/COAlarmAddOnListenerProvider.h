// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COALARMADDONLISTENERPROVIDER_H
#define COALARMADDONLISTENERPROVIDER_H

@class NSString;
@protocol COServiceListenerProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface COAlarmAddOnListenerProvider : NSObject <COServiceListenerProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)serviceShouldAcceptNewConnection:(id)arg0 ;
-(id)serviceListener;


@end


#endif