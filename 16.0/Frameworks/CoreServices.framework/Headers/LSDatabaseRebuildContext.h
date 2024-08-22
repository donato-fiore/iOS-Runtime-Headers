// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSDATABASEREBUILDCONTEXT_H
#define LSDATABASEREBUILDCONTEXT_H

@class NSMutableSet, NSError;

#import <Foundation/Foundation.h>


@interface LSDatabaseRebuildContext : NSObject {
    NSMutableSet *_overriddenPlugins;
    NSError *_lastObservedError;
}




-(id)init;


@end


#endif