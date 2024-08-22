// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAOBJECTLISTENTRY_H
#define SAOBJECTLISTENTRY_H

@protocol SASerializable;

#import <Foundation/Foundation.h>


@interface SAObjectListEntry : NSObject {
    id<SASerializable> *_instance;
    NSUInteger _size;
}






@end


#endif