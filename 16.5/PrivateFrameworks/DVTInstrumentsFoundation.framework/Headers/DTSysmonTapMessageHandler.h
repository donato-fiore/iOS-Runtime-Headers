// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSYSMONTAPMESSAGEHANDLER_H
#define DTSYSMONTAPMESSAGEHANDLER_H

@class NSData;


#import "DTTapMessageHandler.h"

@interface DTSysmonTapMessageHandler : DTTapMessageHandler {
    unsigned int _tapVersion;
    NSData *_nextSampleData;
}




-(id)messageReceived:(id)arg0 ;


@end


#endif