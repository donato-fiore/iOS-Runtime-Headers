// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLSERVER_H
#define _MLSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MLNetworking.h"
#import "_MLNetworkOptions.h"
#import "_MLNetworkPacket.h"

@interface _MLServer : NSObject

@property (copy, nonatomic) id *loadFunction; // ivar: _loadFunction
@property (readonly, nonatomic) _MLNetworking *nwObj; // ivar: _nwObj
@property (readonly, nonatomic) _MLNetworkOptions *nwOptions; // ivar: _nwOptions
@property (readonly, nonatomic) _MLNetworkPacket *packet; // ivar: _packet
@property (copy, nonatomic) id *predictFunction; // ivar: _predictFunction
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // ivar: _q
@property (copy, nonatomic) id *textFunction; // ivar: _textFunction
@property (copy, nonatomic) id *unLoadFunction; // ivar: _unLoadFunction


-(id)initWithOptions:(id)arg0 ;
-(void)doReceive:(id)arg0 context:(id)arg1 isComplete:(BOOL)arg2 error:(id)arg3 ;
-(void)setLoadCommand:(id)arg0 ;
-(void)setPredictCommand:(id)arg0 ;
-(void)setTextCommand:(id)arg0 ;
-(void)setUnLoadCommand:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif