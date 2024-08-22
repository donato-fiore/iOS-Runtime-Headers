// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHUTDOWNDEVICEACTION_H
#define WFSHUTDOWNDEVICEACTION_H

@class WFAction, NSString;



@interface WFShutDownDeviceAction : WFAction {
    ? shutdownReason;
    ? modeParameterKey;
}


@property (nonatomic, readonly) NSString *iconSymbolName;


-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif