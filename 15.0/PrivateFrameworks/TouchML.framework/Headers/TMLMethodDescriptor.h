// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLMETHODDESCRIPTOR_H
#define TMLMETHODDESCRIPTOR_H

@class NSString, NSArray;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>


@interface TMLMethodDescriptor : NSObject <TMLModelSerialize>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *methodName; // ivar: _methodName
@property (readonly, nonatomic) NSString *methodSelector; // ivar: _methodSelector
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSUInteger returnType; // ivar: _returnType
@property (readonly) Class superclass;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
+(id)methodSelectorForMethodName:(id)arg0 parameters:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 returnType:(NSUInteger)arg1 parameters:(id)arg2 methodSelector:(id)arg3 attributes:(id)arg4 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif