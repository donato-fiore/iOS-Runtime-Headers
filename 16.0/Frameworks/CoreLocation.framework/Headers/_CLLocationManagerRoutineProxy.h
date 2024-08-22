// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CLLOCATIONMANAGERROUTINEPROXY_H
#define _CLLOCATIONMANAGERROUTINEPROXY_H

@class NSXPCConnection, NSString;
@protocol CLLocationManagerRoutineClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CLLocationManagerRoutine.h"

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine; // ivar: _locationManagerRoutine
@property (readonly) Class superclass;
@property (nonatomic) BOOL updating; // ivar: _updating


-(id)initWithQueue:(id)arg0 locationManagerRoutine:(id)arg1 ;
-(void)createConnection;
-(void)dealloc;
-(void)didUpdateLocations:(id)arg0 ;
-(void)didUpdateLocations:(id)arg0 withReply:(id)arg1 ;


@end


#endif