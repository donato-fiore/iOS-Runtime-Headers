// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLLOCATIONSMOOTHERPROXY_H
#define _CLLOCATIONSMOOTHERPROXY_H

@class NSXPCConnection, NSString;
@protocol CLLocationSmootherClientInterface, OS_dispatch_queue, CLLocationSmootherDelegate;

#import <Foundation/Foundation.h>

#import "CLLocationSmoother.h"

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CLLocationSmootherDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CLLocationSmoother *locationManagerSmoother; // ivar: _locationManagerSmoother
@property (readonly) Class superclass;


-(id)initWithCLLocationSmoother:(id)arg0 ;
-(void)createConnection;
-(void)dealloc;
-(void)didSmoothLocations:(id)arg0 ofType:(id)arg1 ;


@end


#endif