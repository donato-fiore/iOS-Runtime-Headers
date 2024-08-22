// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCOMPUTESOURCESERVERCONNECTION_H
#define BMCOMPUTESOURCESERVERCONNECTION_H

@class BMProcess, NSString;
@protocol BMComputeSourceServer;

#import <Foundation/Foundation.h>

#import "BMComputeSourceServer.h"

@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer>



@property (readonly, nonatomic) BMProcess *clientProcess; // ivar: _clientProcess
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) BMComputeSourceServer *server; // ivar: _server
@property (readonly) Class superclass;


-(id)initWithServer:(id)arg0 clientProcess:(id)arg1 ;
-(void)sendEventWithStreamIdentifier:(id)arg0 timestamp:(id)arg1 signpostID:(NSUInteger)arg2 eventData:(id)arg3 ;


@end


#endif