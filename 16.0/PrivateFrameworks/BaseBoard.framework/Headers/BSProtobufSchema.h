// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSPROTOBUFSCHEMA_H
#define BSPROTOBUFSCHEMA_H

@class NSMutableData, NSString;
@protocol BSProtobufSchemaBuilder;

#import <Foundation/Foundation.h>

#import "BSProtobufSchema.h"

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder>

 {
    Class _rootClass;
    BSProtobufSchema *_superSchema;
    NSInteger _fieldCount;
    NSInteger _autotagIndex;
    *_BSProtobufFieldEntry _entries;
    NSMutableData *_memoryData;
    BOOL _respondsToDidFinishProtobufDecodingWithError;
    BOOL _respondsToInitForProtobufDecoding;
    BOOL _respondsToInitProtobufTranslatorForObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addField:(char *)arg0 ;
-(void)addField:(char *)arg0 allowedClasses:(id)arg1 ;
-(void)addField:(char *)arg0 forTag:(NSInteger)arg1 ;
-(void)addRepeatingField:(char *)arg0 containsClass:(Class)arg1 ;
-(void)addRepeatingField:(char *)arg0 containsClass:(Class)arg1 forTag:(NSInteger)arg2 ;
-(void)addRepeatingField:(char *)arg0 containsClasses:(id)arg1 ;
-(void)dealloc;


@end


#endif