// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBPERSONAMANAGER_H
#define RBPERSONAMANAGER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RBPersonaManager : NSObject {
    NSInteger _personalID;
    NSCache *_cachedPersonaIdentifiers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}




-(id)init;


@end


#endif