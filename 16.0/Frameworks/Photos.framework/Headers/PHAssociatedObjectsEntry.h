// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSOCIATEDOBJECTSENTRY_H
#define PHASSOCIATEDOBJECTSENTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PHAssociatedObjectsEntry : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_associatedObjects;
}




-(id)init;


@end


#endif