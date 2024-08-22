// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVKEYPATHDEPENDENCY_H
#define AVKEYPATHDEPENDENCY_H

@class NSString;
@protocol OS_dispatch_queue, AVCallbackCancellation;

#import <Foundation/Foundation.h>

#import "AVKVODispatcher.h"
#import "AVWeakReference.h"
#import "AVTwoPartKeyPath.h"

@interface AVKeyPathDependency : NSObject {
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;
    AVKVODispatcher *_KVODispatcher;
    AVWeakReference *_weakReferenceToObject;
    NSString *_dependentKey;
    AVTwoPartKeyPath *_dependencyKeyPath;
    id<AVCallbackCancellation> *_leafPropertyChangeNotifier;
}




+(void)initialize;
-(id)description;
-(id)initWithObject:(id)arg0 thatHasPropertyWithKey:(id)arg1 whoseValueDependsOnValueAtKeyPath:(id)arg2 ;
-(void)_reactToSecondLevelPropertyChange:(id)arg0 ;
-(void)_reactToTopLevelPropertyChange:(id)arg0 ;
-(void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg0 ;
-(void)dealloc;
-(void)initializationIsCompleteForObject:(id)arg0 ;


@end


#endif