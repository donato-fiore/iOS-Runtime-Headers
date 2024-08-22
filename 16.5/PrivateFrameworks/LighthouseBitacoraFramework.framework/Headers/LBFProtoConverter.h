// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFPROTOCONVERTER_H
#define LBFPROTOCONVERTER_H


#import <Foundation/Foundation.h>


@interface LBFProtoConverter : NSObject



+(id)createBitacoraBmltIdentifiers:(id)arg0 ;
+(id)createBitacoraExperimentIdentifiers:(id)arg0 ;
+(id)createLighthousePluginEventStatus:(id)arg0 ;
+(id)createLighthousePluginProto:(id)arg0 ;
+(id)createLighthousePluginProtoData:(id)arg0 ;
+(id)createMLRuntimeProto:(id)arg0 ;
+(id)createMLRuntimeProtoData:(id)arg0 ;
+(id)createMLRuntimeScheduleStatus:(id)arg0 ;
+(id)createMLRuntimeTaskEvent:(id)arg0 ;
+(id)createTrialIdentifiers:(id)arg0 ;
+(id)createTrialdProto:(id)arg0 ;
+(id)createTrialdProtoData:(id)arg0 ;
+(id)deserializeLighthousePluginProto:(id)arg0 ;
+(id)deserializeMLRuntimeProto:(id)arg0 ;
+(id)deserializeTrialdProto:(id)arg0 ;
+(id)serializeBitacoraStateToJson:(id)arg0 ;
+(id)serializeLighthousePluginProtoToJson:(id)arg0 ;
+(id)serializeMLRuntimeProtoToJson:(id)arg0 ;
+(id)serializeTrialdProtoToJson:(id)arg0 ;


@end


#endif