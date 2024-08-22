// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNRUNTIMEASSERTIONSTAKINGCONNECTIONOPERATION_H
#define LNRUNTIMEASSERTIONSTAKINGCONNECTIONOPERATION_H

@class NSString, CLInUseAssertion, NSSet;
@protocol LNRuntimeAssertionsTaking;


#import "LNInterfaceConnectionOperation.h"

@interface LNRuntimeAssertionsTakingConnectionOperation : LNInterfaceConnectionOperation <LNRuntimeAssertionsTaking>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLInUseAssertion *locationAssertion; // ivar: _locationAssertion
@property (retain, nonatomic) NSSet *runtimeAssertions; // ivar: _runtimeAssertions
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 connectionInterface:(id)arg1 systemProtocols:(id)arg2 priority:(NSInteger)arg3 activity:(id)arg4 ;
-(void)acquireRuntimeAssertions;
-(void)invalidateRuntimeAssertions;


@end


#endif