// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVKEYPATHDEPENDENCYMANAGER_H
#define AVKEYPATHDEPENDENCYMANAGER_H

@class NSMutableSet;
@protocol AVKeyPathDependencyRegistration;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVWeakObservableCallbackCancellationHelper.h"

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration>

 {
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}




-(id)initWithDependencyHost:(id)arg0 ;
-(void)addCallbackToCancel:(id)arg0 ;
-(void)cancelAllCallbacks;
-(void)dealloc;
-(void)dependencyHostIsFullyInitialized;
-(void)valueForKey:(id)arg0 dependsOnValueAtKeyPath:(id)arg1 ;


@end


#endif