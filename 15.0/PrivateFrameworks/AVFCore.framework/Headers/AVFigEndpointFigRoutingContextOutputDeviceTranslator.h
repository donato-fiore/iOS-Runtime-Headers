// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGENDPOINTFIGROUTINGCONTEXTOUTPUTDEVICETRANSLATOR_H
#define AVFIGENDPOINTFIGROUTINGCONTEXTOUTPUTDEVICETRANSLATOR_H

@class NSString;
@protocol AVFigRoutingContextOutputDeviceTranslator;

#import <Foundation/Foundation.h>


@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator>

 {
    BOOL _useRouteConfigUpdatedNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedOutputDeviceTranslator;
-(id)init;
-(id)initForUsingRouteConfigUpdatedNotification:(BOOL)arg0 ;
-(id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext *)arg0 ;
-(id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext *)arg0 ;
-(id)predictedOutputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext *)arg0 ;
-(void)addOutputDevice:(id)arg0 withOptions:(struct __CFDictionary *)arg1 toRoutingContext:(struct OpaqueFigRoutingContext *)arg2 completionHandler:(id)arg3 ;
-(void)removeOutputDevice:(id)arg0 withOptions:(struct __CFDictionary *)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext *)arg2 completionHandler:(id)arg3 ;
-(void)setOutputDevice:(id)arg0 withOptions:(struct __CFDictionary *)arg1 onRoutingContext:(struct OpaqueFigRoutingContext *)arg2 completionHandler:(id)arg3 ;
-(void)setOutputDevices:(id)arg0 withOptions:(struct __CFDictionary *)arg1 onRoutingContext:(struct OpaqueFigRoutingContext *)arg2 completionHandler:(id)arg3 ;


@end


#endif