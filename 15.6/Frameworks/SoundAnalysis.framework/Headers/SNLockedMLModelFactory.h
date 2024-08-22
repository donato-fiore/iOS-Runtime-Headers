// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNLOCKEDMLMODELFACTORY_H
#define SNLOCKEDMLMODELFACTORY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SNLockedMLModelFactory : NSObject {
    NSMapTable *_vendedModels;
    mutex _lock;
}




-(id)init;
-(id)sharedLockedModelWithKey:(id)arg0 orCreateNewModelWithWithFunction:(id)arg1 ;


@end


#endif