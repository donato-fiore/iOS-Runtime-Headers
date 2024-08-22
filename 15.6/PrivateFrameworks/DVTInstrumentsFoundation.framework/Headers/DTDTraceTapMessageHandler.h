// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACETAPMESSAGEHANDLER_H
#define DTDTRACETAPMESSAGEHANDLER_H

@class NSURL;


#import "DTTapMessageHandler.h"

@interface DTDTraceTapMessageHandler : DTTapMessageHandler {
    unsigned int _tapVersion;
    int _writeFD;
    NSInteger _filePositionStart;
    NSInteger _filePositionEnd;
    NSURL *_outputURL;
}




-(id)initWithConfig:(id)arg0 ;
-(id)messageReceived:(id)arg0 ;
-(void)dealloc;


@end


#endif