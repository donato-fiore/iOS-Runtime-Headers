// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPROXYKVOOBSERVER_H
#define AVPROXYKVOOBSERVER_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface AVProxyKVOObserver : NSObject {
    id *_retainedObservedObject;
    id *_unsafeUnretainedObservedObject;
    BOOL _canHandleChanges;
}


@property (readonly, nonatomic) id *changesBlock; // ivar: _changesBlock
@property (readonly, nonatomic) BOOL includeChanges; // ivar: _includeChanges
@property (readonly, nonatomic) BOOL includeInitialValue; // ivar: _includeInitialValue
@property (readonly, nonatomic) NSSet *keyPaths; // ivar: _keyPaths
@property (readonly, nonatomic) NSString *token; // ivar: _token


-(id)initWithObservedObject:(id)arg0 observer:(id)arg1 keyPaths:(id)arg2 retainingObservedObject:(BOOL)arg3 includeInitialValue:(BOOL)arg4 includeChanges:(BOOL)arg5 changesBlock:(id)arg6 ;
-(void)_handleValueChangeForKeyPath:(id)arg0 ofObject:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 context:(*void)arg4 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObserving:(id)arg0 completion:(id)arg1 ;
-(void)stopObserving;


@end


#endif