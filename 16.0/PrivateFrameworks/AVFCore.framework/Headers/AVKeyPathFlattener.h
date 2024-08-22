// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVKEYPATHFLATTENER_H
#define AVKEYPATHFLATTENER_H

@class NSString;
@protocol AVKeyPathDependencyHost, AVWeakObservable;

#import <Foundation/Foundation.h>

#import "AVKeyPathDependencyManager.h"
#import "AVTwoPartKeyPath.h"

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable>

 {
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id *dependentProperty;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initForObservingValueAtKeyPath:(id)arg0 onObject:(id)arg1 ;
-(id)observedObject;
-(id)topLevelDependencyProperty;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;


@end


#endif