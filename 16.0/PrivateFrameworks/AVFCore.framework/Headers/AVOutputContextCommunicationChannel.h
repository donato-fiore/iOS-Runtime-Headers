// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTCONTEXTCOMMUNICATIONCHANNEL_H
#define AVOUTPUTCONTEXTCOMMUNICATIONCHANNEL_H

@protocol AVOutputContextCommunicationChannelImpl;

#import <Foundation/Foundation.h>

#import "AVOutputContextCommunicationChannelInternal.h"

@interface AVOutputContextCommunicationChannel : NSObject {
    AVOutputContextCommunicationChannelInternal *_ivars;
}


@property (readonly, nonatomic) *__CFString commChannelUUID;
@property (readonly, nonatomic) NSObject<AVOutputContextCommunicationChannelImpl> *impl;


-(id)init;
-(id)initWithOutputContextCommunicationChannelImpl:(id)arg0 ;
-(void)dealloc;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif