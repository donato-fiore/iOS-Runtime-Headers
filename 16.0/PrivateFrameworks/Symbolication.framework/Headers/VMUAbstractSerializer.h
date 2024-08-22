// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUABSTRACTSERIALIZER_H
#define VMUABSTRACTSERIALIZER_H


#import <Foundation/Foundation.h>


@interface VMUAbstractSerializer : NSObject {
    char * _intRegion;
    char * _stringRegion;
    unsigned int _stringRegCapacity;
    unsigned int _intRegCapacity;
    unsigned int _cursor;
}






@end


#endif