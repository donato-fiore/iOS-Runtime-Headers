// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPASERIALIZATIONMANAGER_H
#define IPASERIALIZATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface IPASerializationManager : NSObject



+(char)adjustmentTypeForFormat:(id)arg0 formatVersion:(id)arg1 ;
+(char)debug_adjustmentTypeFromEnvelopeDictionary:(id)arg0 ;
+(id)_serializerForFormat:(id)arg0 formatVersion:(id)arg1 error:(*id)arg2 ;
+(id)debug_deserializeEnvelopeDictionary:(id)arg0 error:(*id)arg1 ;
+(id)debug_serializeEnvelope:(id)arg0 error:(*id)arg1 ;
+(id)deserialize:(id)arg0 originator:(id)arg1 format:(id)arg2 formatVersion:(id)arg3 error:(*id)arg4 ;
+(id)formatForAdjustmentStack:(id)arg0 ;
+(id)serialize:(id)arg0 error:(*id)arg1 ;
+(id)serialize:(id)arg0 format:(id)arg1 formatVersion:(id)arg2 error:(*id)arg3 ;
+(id)serializeWithCurrentDefaultFormat:(id)arg0 error:(*id)arg1 ;
+(id)serializeWithCurrentDefaultFormat:(id)arg0 format:(*id)arg1 formatVersion:(*id)arg2 error:(*id)arg3 ;
+(id)serializerMap;
+(void)initialize;


@end


#endif