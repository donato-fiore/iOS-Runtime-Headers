// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSACCOUNTCHANNELSSAVEOPERATION_H
#define VSACCOUNTCHANNELSSAVEOPERATION_H

@class NSError;


#import "VSAsyncOperation.h"
#import "VSAccountChannelsCenter.h"
#import "VSAccountChannels.h"

@interface VSAccountChannelsSaveOperation : VSAsyncOperation

@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter; // ivar: _accountChannelsCenter
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VSAccountChannels *unsavedAccountChannels; // ivar: _unsavedAccountChannels


-(id)init;
-(id)initWithUnsavedAccountChannels:(id)arg0 accountChannelsCenter:(id)arg1 ;
-(void)executionDidBegin;


@end


#endif