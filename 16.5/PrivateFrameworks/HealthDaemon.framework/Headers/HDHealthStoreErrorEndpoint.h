// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHSTOREERRORENDPOINT_H
#define HDHEALTHSTOREERRORENDPOINT_H

@class NSError;


#import "HDHealthStoreEndpoint.h"

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {
    NSError *_error;
}




-(void)remote_serverForConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif