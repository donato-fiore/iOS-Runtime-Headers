// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKOBJCPROPERTY_H
#define CKOBJCPROPERTY_H

@class NSString, NSMethodSignature;

#import <Foundation/Foundation.h>

#import "CKObjCType.h"

@interface CKObjCProperty : NSObject {
    Class _classHandle;
    NSUInteger _flags;
    NSString *_getterSelectorName;
    NSMethodSignature *_getterMethodSignature;
    NSString *_setterSelectorName;
    NSMethodSignature *_setterMethodSignature;
    NSString *_instanceVariableName;
}


@property (readonly, nonatomic) SEL getterSelector; // ivar: _getterSelector
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) SEL setterSelector; // ivar: _setterSelector
@property (readonly, nonatomic) CKObjCType *type; // ivar: _type


-(NSInteger)compare:(id)arg0 ;
-(id)description;


@end


#endif