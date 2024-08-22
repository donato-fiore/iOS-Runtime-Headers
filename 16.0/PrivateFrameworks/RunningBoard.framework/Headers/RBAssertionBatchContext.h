// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBASSERTIONBATCHCONTEXT_H
#define RBASSERTIONBATCHCONTEXT_H

@class NSArray;
@protocol RBDaemonContextProviding;

#import <Foundation/Foundation.h>

#import "RBProcess.h"

@interface RBAssertionBatchContext : NSObject

@property (nonatomic) NSUInteger acquisitionPolicy; // ivar: _acquisitionPolicy
@property (nonatomic) BOOL allowAbstractTarget; // ivar: _allowAbstractTarget
@property (readonly, nonatomic) NSObject<RBDaemonContextProviding> *daemonContext; // ivar: _daemonContext
@property (readonly, copy, nonatomic) NSArray *descriptorsToAcquire; // ivar: _descriptorsToAcquire
@property (retain, nonatomic) id *holdToken; // ivar: _holdToken
@property (readonly, copy, nonatomic) NSArray *identifiersToInvalidate; // ivar: _identifiersToInvalidate
@property (readonly, nonatomic) RBProcess *process; // ivar: _process
@property (nonatomic) BOOL unitTesting; // ivar: _unitTesting


+(id)contextForProcess:(id)arg0 acquisitionCompletionPolicy:(NSUInteger)arg1 withDescriptorsToAcquire:(id)arg2 identifiersToInvalidate:(id)arg3 daemonContext:(id)arg4 ;
+(id)contextForProcess:(id)arg0 withDescriptorsToAcquire:(id)arg1 identifiersToInvalidate:(id)arg2 daemonContext:(id)arg3 ;
-(id)_init;
-(id)acquisitionContextForDescriptor:(id)arg0 ;


@end


#endif