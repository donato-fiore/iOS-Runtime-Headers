// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBASSERTIONACQUISITIONCONTEXT_H
#define RBASSERTIONACQUISITIONCONTEXT_H

@class RBSAssertionDescriptor;
@protocol RBDaemonContextProviding;

#import <Foundation/Foundation.h>

#import "RBProcess.h"

@interface RBAssertionAcquisitionContext : NSObject

@property (nonatomic) NSUInteger acquisitionPolicy; // ivar: _acquisitionPolicy
@property (nonatomic) BOOL allowAbstractTarget; // ivar: _allowAbstractTarget
@property (readonly, nonatomic) NSObject<RBDaemonContextProviding> *daemonContext; // ivar: _daemonContext
@property (readonly, nonatomic) RBSAssertionDescriptor *descriptor; // ivar: _descriptor
@property (retain, nonatomic) id *holdToken; // ivar: _holdToken
@property (readonly, nonatomic) RBProcess *process; // ivar: _process
@property (nonatomic) BOOL unitTesting; // ivar: _unitTesting


+(id)contextForProcess:(id)arg0 withDescriptor:(id)arg1 daemonContext:(id)arg2 ;


@end


#endif