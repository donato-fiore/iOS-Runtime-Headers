// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIAITEMSERIALIZATION_H
#define SHMEDIAITEMSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface SHMediaItemSerialization : NSObject



+(id)dateFormatter;
+(id)propertiesFromSerializationFormat:(id)arg0 error:(*id)arg1 ;
+(id)serializationFormatForProperties:(id)arg0 error:(*id)arg1 ;
+(id)transformProperties:(id)arg0 toSerializationFormat:(BOOL)arg1 error:(*id)arg2 ;
+(id)transformValue:(id)arg0 forProperty:(id)arg1 toSerializationFormat:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif