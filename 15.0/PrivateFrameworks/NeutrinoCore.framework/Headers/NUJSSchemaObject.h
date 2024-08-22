// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSSCHEMAOBJECT_H
#define NUJSSCHEMAOBJECT_H

@protocol NUIdentifiable;


#import "NUJSModelObject.h"
#import "NUSchema.h"

@interface NUJSSchemaObject : NUJSModelObject

@property (readonly, nonatomic) NSObject<NUIdentifiable> *item;
@property (readonly, nonatomic) NUSchema *schema;


+(id)JSValueWithSchema:(id)arg0 identifiableItem:(id)arg1 context:(id)arg2 ;
-(BOOL)hasProperty:(id)arg0 ;
-(id)initWithModel:(id)arg0 representedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithWithSchema:(id)arg0 identifiableItem:(id)arg1 context:(id)arg2 ;
-(id)valueForProperty:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif