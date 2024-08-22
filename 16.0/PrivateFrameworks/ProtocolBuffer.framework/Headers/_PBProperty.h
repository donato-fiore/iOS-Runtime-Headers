// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PBPROPERTY_H
#define _PBPROPERTY_H

@class NSString, NSInvocation, NSArray;

#import <Foundation/Foundation.h>


@interface _PBProperty : NSObject {
    NSString *_name;
    Class _objectType;
    Class _subObjectType;
    char _type;
    char _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    *unk _toDictionaryReprFn;
    *unk _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    NSUInteger _structSize;
}




-(id)description;
-(void)dealloc;


@end


#endif