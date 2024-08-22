// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NENEXUSFLOWMANAGER_H
#define NENEXUSFLOWMANAGER_H

@class NSMutableDictionary;
@protocol OS_nw_channel;

#import <Foundation/Foundation.h>


@interface NENexusFlowManager : NSObject {
    NSObject<OS_nw_channel> *_kernelChannel;
    *nw_protocol _protocol;
    *nw_protocol _defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}




-(void)dealloc;


@end


#endif