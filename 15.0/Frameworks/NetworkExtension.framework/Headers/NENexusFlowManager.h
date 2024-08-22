// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NENEXUSFLOWMANAGER_H
#define NENEXUSFLOWMANAGER_H

@class NSMutableDictionary;
@protocol OS_nw_channel;

#import <Foundation/Foundation.h>


@interface NENexusFlowManager : NSObject

@property *nw_protocol defaultInputProtocol; // ivar: _defaultInputProtocol
@property (retain) NSObject<OS_nw_channel> *kernelChannel; // ivar: _kernelChannel
@property *nw_protocol protocol; // ivar: _protocol
@property (retain) NSMutableDictionary *userChannels; // ivar: _userChannels


-(void)dealloc;


@end


#endif