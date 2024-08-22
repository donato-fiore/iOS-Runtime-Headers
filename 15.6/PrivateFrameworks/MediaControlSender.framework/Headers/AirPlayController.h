// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIRPLAYCONTROLLER_H
#define AIRPLAYCONTROLLER_H

@class NSXPCConnection, NSString;
@protocol AirPlayControllerAsync, AirPlayControllerSync, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_cnx;
}


@property (copy, nonatomic) NSString *xpcName; // ivar: _xpcName


-(id)_setupConnection;
-(id)getProperty:(id)arg0 qualifier:(id)arg1 status:(*int)arg2 ;
-(id)init;
-(int)performCommand:(id)arg0 qualifier:(id)arg1 params:(id)arg2 response:(*id)arg3 ;
-(int)setProperty:(id)arg0 qualifier:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(void)getProperty:(id)arg0 qualifier:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)performCommand:(id)arg0 qualifier:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)postEvent:(id)arg0 qualifier:(id)arg1 params:(id)arg2 ;
-(void)postEvent:(id)arg0 qualifier:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)setProperty:(id)arg0 qualifier:(id)arg1 value:(id)arg2 completion:(id)arg3 ;


@end


#endif