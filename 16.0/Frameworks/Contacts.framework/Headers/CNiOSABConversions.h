// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNIOSABCONVERSIONS_H
#define CNIOSABCONVERSIONS_H


#import <Foundation/Foundation.h>


@interface CNiOSABConversions : NSObject



// +(id)arrayByMappingTransform:(id)arg0 onCFArray:(unk)arg1  ;
+(id)contactFromABPerson:(*void)arg0 uniqueKeysToConvert:(id)arg1 mutable:(BOOL)arg2 ;
+(id)dataFromABBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)dateFromABBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)numberFromIntegerABBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(id)os_log;
+(id)stringFromABBytes:(char *)arg0 length:(NSUInteger)arg1 ;
+(void)initialize;
+(void)updateContact:(id)arg0 fromABPerson:(*void)arg1 keysToConvert:(id)arg2 availableKeyDescriptor:(*id)arg3 ;


@end


#endif