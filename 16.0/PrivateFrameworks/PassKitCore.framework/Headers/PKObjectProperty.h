// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKOBJECTPROPERTY_H
#define PKOBJECTPROPERTY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKObjectProperty : NSObject {
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    NSUInteger _type;
    NSString *_valueGetter;
}






@end


#endif