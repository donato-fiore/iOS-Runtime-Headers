// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFADJUSTMENTSERIALIZATION_H
#define PFADJUSTMENTSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PFAdjustmentSerialization : NSObject



+(BOOL)validateArchive:(id)arg0 containsEntryWithKey:(id)arg1 ofType:(Class)arg2 errors:(id)arg3 ;
+(BOOL)validateValue:(id)arg0 isOfType:(Class)arg1 errors:(id)arg2 ;
+(id)deserializeAdjustmentsFromData:(id)arg0 error:(*id)arg1 ;
+(id)deserializeDictionaryFromData:(id)arg0 error:(*id)arg1 ;
+(id)serializeAdjustments:(id)arg0 error:(*id)arg1 ;
+(id)serializeDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif