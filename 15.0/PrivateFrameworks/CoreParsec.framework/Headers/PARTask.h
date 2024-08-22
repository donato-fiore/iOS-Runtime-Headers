// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARTASK_H
#define PARTASK_H


#import <Foundation/Foundation.h>

#import "PARRequest.h"
#import "PARSession.h"

@interface PARTask : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) PARRequest *request; // ivar: _request
@property (weak, nonatomic) PARSession *session; // ivar: _session


-(void)resume;


@end


#endif