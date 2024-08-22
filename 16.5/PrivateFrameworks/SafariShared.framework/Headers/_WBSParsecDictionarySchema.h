// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBSPARSECDICTIONARYSCHEMA_H
#define _WBSPARSECDICTIONARYSCHEMA_H

@class NSDictionary;


#import "WBSParsecSchema.h"

@interface _WBSParsecDictionarySchema : WBSParsecSchema

@property (copy, nonatomic) NSDictionary *keysToSchemata; // ivar: _keysToSchemata


-(BOOL)_validateChild:(id)arg0 ofParent:(id)arg1 withParentAssociatedError:(id)arg2 errorHandler:(id)arg3 ;
-(id)initWithSchemaDictionary:(id)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;


@end


#endif