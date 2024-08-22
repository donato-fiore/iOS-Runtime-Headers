// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTATUSOBSERVERCONNECTION_H
#define ATSTATUSOBSERVERCONNECTION_H

@class NSXPCConnection, NSString;
@protocol ATStatusObserverConnectionProtocol, ATStatusMonitorObserver;

#import <Foundation/Foundation.h>


@interface ATStatusObserverConnection : NSObject <ATStatusObserverConnectionProtocol, ATStatusMonitorObserver>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)connection:(id)arg0 updatedAssets:(id)arg1 ;
-(void)connection:(id)arg0 updatedProgress:(id)arg1 ;
-(void)fetchAllStatusWithCompletion:(id)arg0 ;
-(void)monitor:(id)arg0 didUpdateWithStatus:(id)arg1 ;
-(void)resume;


@end


#endif