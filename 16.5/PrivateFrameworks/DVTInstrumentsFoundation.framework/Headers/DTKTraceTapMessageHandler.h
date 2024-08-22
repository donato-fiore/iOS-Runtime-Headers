// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACETAPMESSAGEHANDLER_H
#define DTKTRACETAPMESSAGEHANDLER_H

@class NSMutableArray;
@protocol DVTInputStream><DVTOutputStream;


#import "DTTapMessageHandler.h"

@interface DTKTraceTapMessageHandler : DTTapMessageHandler {
    id<DVTInputStream><DVTOutputStream> *_datastream;
    NSMutableArray *_rawMessages;
    unsigned int _tapVersion;
    unsigned int _coreCount;
    NSInteger _triggerCount;
    *unsigned int _triggerIDs;
}




-(id)initWithConfig:(id)arg0 ;
-(id)messageReceived:(id)arg0 ;


@end


#endif