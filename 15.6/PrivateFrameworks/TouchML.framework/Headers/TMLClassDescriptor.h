// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLCLASSDESCRIPTOR_H
#define TMLCLASSDESCRIPTOR_H

@class NSDictionary, NSString;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>

#import "TMLValueExpression.h"
#import "TMLClassDescriptor.h"

@interface TMLClassDescriptor : NSObject <TMLModelSerialize>



@property (readonly, nonatomic) NSDictionary *childClasses; // ivar: _childClasses
@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *inheritedMethods;
@property (readonly, nonatomic) NSDictionary *inheritedProperties;
@property (readonly, nonatomic) NSDictionary *inheritedSignals;
@property (readonly, nonatomic) TMLValueExpression *initializer; // ivar: _initializer
@property (readonly, nonatomic) NSDictionary *methods; // ivar: _methods
@property (readonly, nonatomic) Class objcClass; // ivar: _objcClass
@property (copy, nonatomic) NSString *objcClassName; // ivar: _objcClassName
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSDictionary *signals; // ivar: _signals
@property (retain, nonatomic) TMLClassDescriptor *superClass; // ivar: _superClass
@property (readonly, nonatomic) NSString *superClassName; // ivar: _superClassName
@property (readonly) Class superclass;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(BOOL)canMergeFromClassDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeFromClassDescriptor:(id)arg0 ;
-(id)initWithName:(id)arg0 superClassName:(id)arg1 initializer:(id)arg2 optional:(BOOL)arg3 ;
-(id)propertyForName:(id)arg0 ;
-(void)addChildClass:(id)arg0 ;
-(void)addMethod:(id)arg0 ;
-(void)addProperty:(id)arg0 ;
-(void)addSignal:(id)arg0 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif