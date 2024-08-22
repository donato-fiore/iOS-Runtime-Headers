// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCAMERAADJUSTMENTSSERIALIZATION_H
#define PFCAMERAADJUSTMENTSSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface PFCameraAdjustmentsSerialization : NSObject



+(BOOL)deserializeDictionary:(id)arg0 toFilters:(*id)arg1 portraitMetadata:(*id)arg2 error:(*id)arg3 ;
+(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
+(id)_errorWithMessage:(id)arg0 code:(NSInteger)arg1 ;
+(id)deserializedAdjustmentsFromData:(id)arg0 error:(*id)arg1 ;
+(id)serializedAdjustments:(id)arg0 error:(*id)arg1 ;
+(id)serializedDictionaryForFilters:(id)arg0 portraitMetadata:(id)arg1 error:(*id)arg2 ;


@end


#endif