// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMCANCELLABLECLIENTSUBSCRIBER_H
#define _BMCANCELLABLECLIENTSUBSCRIBER_H

@class NSString;
@protocol BPSCancellable;

#import <Foundation/Foundation.h>

#import "BMComputeXPCPublisherClient.h"

@interface _BMCancellableClientSubscriber : NSObject <BPSCancellable>



@property (retain, nonatomic) BMComputeXPCPublisherClient *client; // ivar: _client
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithClient:(id)arg0 identifier:(id)arg1 ;
-(void)cancel;


@end


#endif