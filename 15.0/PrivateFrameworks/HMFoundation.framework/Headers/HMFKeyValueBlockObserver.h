// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFKEYVALUEBLOCKOBSERVER_H
#define HMFKEYVALUEBLOCKOBSERVER_H

@class NSString;
@protocol HMFLogging;


#import "HMFObject.h"

@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    BOOL _valid;
    BOOL _observing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak) id *observedObject; // ivar: _observedObject
@property (readonly) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)__invalidate;
-(id)init;
-(id)initWithKeyPath:(id)arg0 object:(id)arg1 ;
-(id)initWithKeyPath:(id)arg0 object:(id)arg1 options:(NSUInteger)arg2 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif