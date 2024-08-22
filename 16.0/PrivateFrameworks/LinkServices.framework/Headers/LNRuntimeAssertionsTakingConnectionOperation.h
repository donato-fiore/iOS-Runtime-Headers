// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNRUNTIMEASSERTIONSTAKINGCONNECTIONOPERATION_H
#define LNRUNTIMEASSERTIONSTAKINGCONNECTIONOPERATION_H

@class LNActionMetadata, NSString, CLInUseAssertion;
@protocol LNRuntimeAssertionsTaking;


#import "LNConnectionOperation.h"

@interface LNRuntimeAssertionsTakingConnectionOperation : LNConnectionOperation <LNRuntimeAssertionsTaking>



@property (retain, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLInUseAssertion *locationAssertion; // ivar: _locationAssertion
@property (readonly) Class superclass;


-(id)generateRuntimeAssertionsFromActionMetadata:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 connectionInterface:(id)arg1 actionMetadata:(id)arg2 priority:(NSInteger)arg3 activity:(id)arg4 ;
-(void)acquireRuntimeAssertions;
-(void)invalidateRuntimeAssertions;


@end


#endif