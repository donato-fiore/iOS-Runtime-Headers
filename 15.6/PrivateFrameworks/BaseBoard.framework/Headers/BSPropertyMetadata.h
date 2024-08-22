// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPROPERTYMETADATA_H
#define BSPROPERTYMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSPropertyMetadata : NSObject {
    char _type;
    NSString *_typeString;
    Class _classType;
    NSString *_getterName;
    NSString *_setterName;
    NSString *_name;
    NSString *_defaultKey;
    id *_defaultValue;
    NSUInteger _options;
}




-(id)description;


@end


#endif