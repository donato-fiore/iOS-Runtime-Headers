// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMEDIAREMOTECOMMANDOPERATION_H
#define MPCMEDIAREMOTECOMMANDOPERATION_H

@class MPAsyncOperation;


#import "MPCPlayerCommandRequest.h"
#import "MPCPlayerCommandStatus.h"

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) MPCPlayerCommandRequest *request; // ivar: _request
@property (readonly, nonatomic) MPCPlayerCommandStatus *status; // ivar: _status


-(id)initWithCommandRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(void)execute;


@end


#endif