// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCONNECTIONSOBSERVER_H
#define CBCONNECTIONSOBSERVER_H

@class CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATVModel.h"

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate>



@property (retain) CBCentralManager *central; // ivar: _central
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) BOOL hasStarted; // ivar: _hasStarted
@property (readonly) NSUInteger hash;
@property (retain) ATVModel *model; // ivar: _model
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)attachSessionWithError:(*id)arg0 ;
-(BOOL)cleanupWithError:(*id)arg0 ;
-(id)getStatus;
-(id)initWithCentralManager:(id)arg0 Queue:(id)arg1 Error:(*id)arg2 ;
-(int)getAvailableHAPConnections;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)updateBleStatus:(struct BTRemoteContext *)arg0 ;


@end


#endif