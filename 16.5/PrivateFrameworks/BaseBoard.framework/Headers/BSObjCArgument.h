// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSOBJCARGUMENT_H
#define BSOBJCARGUMENT_H

@class NSString, NSArray;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSObjCArgument : NSObject <BSDescriptionProviding>

 {
    NSString *_encoding;
    NSUInteger _size;
    char _type;
}


@property (readonly, nonatomic, getter=isBlock) BOOL block;
@property (readonly, nonatomic, getter=isBoolean) BOOL boolean;
@property (readonly, retain, nonatomic) NSArray *containedClasses; // ivar: _containedClasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic, getter=isVoid) BOOL isVoid;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isObject) BOOL object;
@property (readonly, retain, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic, getter=isOnewayVoid) BOOL onewayVoid; // ivar: _onewayVoid
@property (readonly, nonatomic, getter=isPlistObject) BOOL plistObject; // ivar: _plistObject
@property (readonly, nonatomic, getter=isPointer) BOOL pointer;
@property (readonly, copy, nonatomic) NSArray *protocols; // ivar: _protocols
@property (readonly, nonatomic) NSUInteger size;
@property (readonly, copy, nonatomic) NSString *structName; // ivar: _structName
@property (readonly) Class superclass;
@property (readonly, nonatomic) char type;
@property (readonly, nonatomic, getter=isXPCObject) BOOL xpcObject;


-(id)_prettyTypeString;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif