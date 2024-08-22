// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFBIOMESTOREDATACONVERTER_H
#define LBFBIOMESTOREDATACONVERTER_H


#import <Foundation/Foundation.h>


@interface LBFBiomeStoreDataConverter : NSObject



+(id)createLighthousePluginEvent:(id)arg0 identifiers:(id)arg1 timestamp:(id)arg2 ;
+(id)createMLRuntimedEvent:(id)arg0 identifiers:(id)arg1 timestamp:(id)arg2 ;
+(id)createTrialIdentifiers:(id)arg0 ;
+(id)createTrialdEvent:(id)arg0 identifiers:(id)arg1 timestamp:(id)arg2 ;
+(id)protoFromBiomeLighthousePluginEvent:(id)arg0 ;
+(id)protoFromBiomeMlruntimedEvent:(id)arg0 ;
+(id)protoFromBiomeTrialdEvent:(id)arg0 ;
+(id)protoFromTrialIdentifier:(id)arg0 ;
+(id)serializeBitacoraStateToJson:(id)arg0 ;


@end


#endif