// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSINSTALLATIONSERVICE_H
#define _LSINSTALLATIONSERVICE_H

@class NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSInstallationService : NSObject <NSXPCListenerDelegate>



@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue; // ivar: _databaseQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(id)serviceQueue;
+(void)beginListening;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;


@end


#endif