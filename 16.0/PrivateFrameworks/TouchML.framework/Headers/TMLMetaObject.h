// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLMETAOBJECT_H
#define TMLMETAOBJECT_H

@class NSSet, NSString, NSArray, NSDictionary, NSOrderedSet;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>

#import "TMLValueExpression.h"

@interface TMLMetaObject : NSObject <TMLModelSerialize>



@property (readonly, nonatomic) NSSet *attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *declarations; // ivar: _declarations
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *implements; // ivar: _implements
@property (retain, nonatomic) TMLValueExpression *initializer; // ivar: _initializer
@property (readonly, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSOrderedSet *propertyKeys; // ivar: _propertyKeys
@property (readonly, nonatomic) NSDictionary *signalHandlers; // ivar: _signalHandlers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(id)initWithType:(id)arg0 attributes:(id)arg1 ;
-(id)propertyDeclaration:(id)arg0 ;
-(id)signalDeclaration:(id)arg0 ;
-(void)addConstructorDeclaration:(id)arg0 parameters:(id)arg1 methodSelector:(id)arg2 attributes:(id)arg3 ;
-(void)addDeclaration:(id)arg0 ;
-(void)addImplements:(id)arg0 ;
-(void)addMethodDeclaration:(id)arg0 returnType:(id)arg1 parameters:(id)arg2 methodSelector:(id)arg3 attributes:(id)arg4 ;
-(void)addObject:(id)arg0 ;
-(void)addProperty:(id)arg0 value:(id)arg1 ;
-(void)addPropertyDeclaration:(id)arg0 typeName:(id)arg1 attributes:(id)arg2 ;
-(void)addSignalDeclaration:(id)arg0 returnType:(id)arg1 parameters:(id)arg2 methodSelector:(id)arg3 attributes:(id)arg4 ;
-(void)addSignalHandler:(id)arg0 signalTarget:(id)arg1 ;
-(void)applyCategory:(id)arg0 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif