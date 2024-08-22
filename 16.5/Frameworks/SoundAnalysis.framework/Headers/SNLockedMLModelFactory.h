// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNLOCKEDMLMODELFACTORY_H
#define SNLOCKEDMLMODELFACTORY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SNLockedMLModelFactory : NSObject {
    NSMapTable *_vendedModels;
    mutex _lock;
}




-(id)init;


@end


#endif