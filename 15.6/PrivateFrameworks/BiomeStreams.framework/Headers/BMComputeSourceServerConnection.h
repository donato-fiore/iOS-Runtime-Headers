// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMCOMPUTESOURCESERVERCONNECTION_H
#define BMCOMPUTESOURCESERVERCONNECTION_H

@class NSSet, NSString;
@protocol BMComputeSourceServer;

#import <Foundation/Foundation.h>

#import "BMComputeSourceServer.h"

@interface BMComputeSourceServerConnection : NSObject <BMComputeSourceServer>



@property (readonly, nonatomic) NSSet *authorizedStreams; // ivar: _authorizedStreams
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) BMComputeSourceServer *server; // ivar: _server
@property (readonly) Class superclass;


-(id)initWithServer:(id)arg0 authorizedStreams:(id)arg1 ;
-(void)sendEventWithStreamIdentifier:(id)arg0 timestamp:(id)arg1 signpostID:(NSUInteger)arg2 eventData:(id)arg3 ;


@end


#endif