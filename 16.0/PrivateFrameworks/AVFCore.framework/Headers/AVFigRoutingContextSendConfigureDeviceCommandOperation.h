// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFIGROUTINGCONTEXTSENDCONFIGUREDEVICECOMMANDOPERATION_H
#define AVFIGROUTINGCONTEXTSENDCONFIGUREDEVICECOMMANDOPERATION_H

@protocol AVOutputDeviceConfigurationRetrieval;


#import "AVOperation.h"

@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {
    *OpaqueFigRoutingContext _routingContext;
    id *_configuratorBlock;
}


@property (retain, nonatomic) NSObject<AVOutputDeviceConfigurationRetrieval> *finalConfiguration; // ivar: _finalConfiguration


+(void)initialize;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg0 configuratorBlock:(id)arg1 ;
-(void)dealloc;
-(void)start;


@end


#endif