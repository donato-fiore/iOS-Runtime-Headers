// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLREMOTECONNECTION_H
#define _MLREMOTECONNECTION_H

@class NSMutableData;
@protocol OS_nw_connection, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "_MLNetworking.h"
#import "_MLNetworkOptions.h"
#import "_MLNetworkPacket.h"

@interface _MLRemoteConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (readonly, nonatomic) NSUInteger jobCount; // ivar: _jobCount
@property (readonly, nonatomic) _MLNetworking *nwObj; // ivar: _nwObj
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions; // ivar: _nwOptions
@property (retain, nonatomic) NSMutableData *outputResult; // ivar: _outputResult
@property (readonly, nonatomic) _MLNetworkPacket *packet; // ivar: _packet
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // ivar: _q
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


-(BOOL)loadFromURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)predictionFromURL:(id)arg0 features:(id)arg1 output:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(BOOL)sendDataAndWaitForAcknowledgementOrTimeout:(id)arg0 ;
-(BOOL)unloadFromURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithOptions:(id)arg0 ;
-(void)doReceive:(id)arg0 context:(id)arg1 isComplete:(BOOL)arg2 error:(id)arg3 ;
-(void)send:(id)arg0 options:(id)arg1 ;


@end


#endif