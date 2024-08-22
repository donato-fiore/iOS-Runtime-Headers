// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTSERIALIZATION_H
#define PTSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PTSerialization : NSObject



+(BOOL)_supportedOptions:(id)arg0 forObject:(id)arg1 ;
+(BOOL)isValidObject:(id)arg0 ;
+(BOOL)registerSerializationClass:(Class)arg0 ;
+(BOOL)writeObject:(id)arg0 toData:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(Class)classForType:(unsigned int)arg0 ;
+(NSUInteger)sizeOfSerializedObject:(id)arg0 options:(id)arg1 ;
+(id)_errorFromAtomError:(id)arg0 ;
+(id)_errorFromAtomStream:(id)arg0 ;
+(id)_errorFromAtomWriter:(id)arg0 ;
+(id)_errorNotSerializable;
+(id)_errorUnsupportedVersion;
+(id)_errorWithCode:(NSInteger)arg0 ;
+(id)dataFromObject:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)infoForType:(unsigned int)arg0 ;
+(id)objectFromData:(id)arg0 error:(*id)arg1 ;
+(void)registerType:(unsigned int)arg0 providerClass:(Class)arg1 ;
+(void)registerTypeInfo:(id)arg0 ;


@end


#endif