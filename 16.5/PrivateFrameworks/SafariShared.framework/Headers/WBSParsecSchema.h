// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECSCHEMA_H
#define WBSPARSECSCHEMA_H

@class NSError;

#import <Foundation/Foundation.h>


@interface WBSParsecSchema : NSObject

@property (retain, nonatomic) NSError *associatedError; // ivar: _associatedError
@property (retain, nonatomic) Class expectedClass; // ivar: _expectedClass
@property (nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (copy, nonatomic) id *specializedSchemaBlock; // ivar: _specializedSchemaBlock
@property (copy, nonatomic) id *validationBlock; // ivar: _validationBlock


+(id)schemaForArrayWithElementSchema:(id)arg0 ;
+(id)schemaForArrayWithElementSchema:(id)arg0 associatedError:(id)arg1 ;
+(id)schemaForArrayWithElementSchema:(id)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;
+(id)schemaForDictionaryWithStructure:(id)arg0 ;
+(id)schemaForDictionaryWithStructure:(id)arg0 associatedError:(id)arg1 ;
+(id)schemaForDictionaryWithStructure:(id)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;
+(id)schemaWithConstantValue:(id)arg0 ;
+(id)schemaWithExpectedClass:(Class)arg0 ;
+(id)schemaWithExpectedClass:(Class)arg0 associatedError:(id)arg1 ;
+(id)schemaWithExpectedClass:(Class)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;
-(BOOL)_validateChild:(id)arg0 ofParent:(id)arg1 withParentAssociatedError:(id)arg2 errorHandler:(id)arg3 ;
-(id)_initWithExpectedClass:(Class)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;
-(void)validateObject:(id)arg0 withErrorHandler:(id)arg1 ;


@end


#endif