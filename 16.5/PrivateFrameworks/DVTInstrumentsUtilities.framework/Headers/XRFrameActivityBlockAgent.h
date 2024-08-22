// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRFRAMEACTIVITYBLOCKAGENT_H
#define XRFRAMEACTIVITYBLOCKAGENT_H

@protocol XRMinorFrameAgent;


#import "XRMobileAgent.h"

@interface XRFrameActivityBlockAgent : XRMobileAgent <XRMinorFrameAgent>

 {
    id *_block;
    uint8_t _opPtr;
}


@property (nonatomic) *uint8_t yieldNow; // ivar: _yieldNow


-(id)agentDiagnosticsName;
-(id)init;
-(id)initWithBlock:(id)arg0 ;
-(id)operationRepresentation;
-(void)dealloc;
-(void)executeStopOnItinerary:(id)arg0 ;


@end


#endif